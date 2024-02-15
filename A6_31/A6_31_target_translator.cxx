#include "A6_31_translator.h"

string in_file, asm_file;

ActivationRecord *curr_ar;

ofstream asmFile;

// for escape sequence
map<char, int> esc_to_ascii = {{'n', 10}, {'t', 9}, {'r', 13}, {'b', 8}, {'f', 12}, {'v', 11}, {'a', 7}, {'0', 0}};


map<int, map<int, string>> num_to_reg = {
                                            {1, 
                                                {
                                                    {1, "dil"}, 
                                                    {4, "edi"}, 
                                                    {8, "rdi"}
                                                }
                                            }, 
                                            {2, 
                                                {
                                                    {1, "sil"}, 
                                                    {4, "esi"}, 
                                                    {8, "rsi"}
                                                }
                                            }, 
                                            {3, 
                                                {
                                                    {1, "dl"}, 
                                                    {4, "edx"}, 
                                                    {8, "rdx"}
                                                }
                                            }, 
                                            {4, 
                                                {
                                                    {1, "cl"}, 
                                                    {4, "ecx"}, 
                                                    {8, "rcx"}
                                                }
                                            }
                                        };

int get_ascii(string cc)
{
    if (cc.length() == 3)
    {
        return (int)cc[1];
    }
    else
    {
        if (esc_to_ascii.find(cc[2]) != esc_to_ascii.end())
        {
            return esc_to_ascii[cc[2]];
        }
        else
        {
            return (int)cc[2];
        }
    }
}

string stack_location(string name)
{
    if (curr_ar->displacement.count(name))
        return toString(curr_ar->displacement[name]) + "(%rbp)";
    else{
        // cout << "Error!! " << name <<" not found on Stack!!\n";
        return name;
    }
}

string find_register(string name, int number, int size)
{
    string regis = num_to_reg[number][size];
    return "%" + regis;
}

// storing the values of the parameters in the registers, before calling another function
void storing_paramter(string name, int number)
{
    Symbol *symbol = currentTable->search(name);
    int size = symbol->size;
    SymbolType::typeEnum type = symbol->type->type;
    string instr = "";
    if (type == SymbolType::ARRAY)
    {
        instr = "leaq";     // load effective address
        size = 8;
    }
    else if (size == 1)
    {
        instr = "movb";
    }
    else if (size == 4)
    {
        instr = "movl";
    }
    else if (size == 8)
    {
        instr = "movq";
    }
    string regis = find_register(name, number, size);
    asmFile << "\t" << setw(8) << instr << stack_location(name) << ", " << regis << endl;
}

// moves the parameters from the stack to the registers
void parameter(string name, int number)
{
    Symbol *symbol = currentTable->search(name);
    int size = symbol->size;
    SymbolType::typeEnum type = symbol->type->type;
    string instr = "";
    if (type == SymbolType::ARRAY)
    {
        instr = "movq";
        size = 8;
    }
    else if (size == 1)
    {
        instr = "movb";
    }
    else if (size == 4)
    {
        instr = "movl";
    }
    else if (size == 8)
    {
        instr = "movq";
    }
    string regis = find_register(name, number, size);
    // this movs the parameter from the stack location (-x(%rbp)) to the target register
    asmFile << "\t" << setw(8) << instr << regis << ", " << stack_location(name) << endl;
}

void translate()
{
    asmFile.open(asm_file);
    asmFile << left;
    asmFile << "\t.file\t\"" + in_file + "\"" << endl;
    asmFile << endl;
    asmFile << "#\t"
            << "Allocation of variables on the stack (Activation record):\n"
            << endl;
    for (auto &symbol : globalTable->symbols)
    {
        if (symbol.second.category == Symbol::FUNCTION)
        {
            asmFile << "#\t" << symbol.second.name << endl;
            for (auto &record : symbol.second.nestedTable->activationRecord->displacement)
            {
                asmFile << "#\t" << record.first << ": " << record.second << endl;
            }
        }
    }
    asmFile << endl;
    if (stringLiterals.size() > 0)
    {
        asmFile << "\t.section\t.rodata" << endl;
        int i = 0;
        for (auto &stringLiteral : stringLiterals)
        {
            asmFile << ".LC" << i++ << ":" << endl;
            asmFile << "\t.string\t" << stringLiteral << endl;
        }
    }

    for (auto &symbol : globalTable->symbols)
    {
        if (symbol.second.initialValue.empty() && symbol.second.category==Symbol::GLOBAL)
        {
            if (symbol.second.type->type == SymbolType::INT_T)
            {
                asmFile << "\t" << setw(8) << ".globl" << symbol.second.name << endl;
                asmFile << "\t" << setw(8) << ".align" << 4 << endl;
                asmFile << "\t" << setw(8) << ".type" << symbol.second.name << ", @object" << endl;
                asmFile << "\t" << setw(8) << ".size" << symbol.second.name << ", 4" << endl;
                asmFile << symbol.second.name << ":" << endl;
                asmFile << "\t" << setw(8) << ".zero" << 4 << endl;
            }
            else if (symbol.second.type->type == SymbolType::CHAR_T)
            {
                asmFile << "\t" << setw(8) << ".globl" << symbol.second.name << endl;
                asmFile << "\t" << setw(8) << ".type" << symbol.second.name << ", @object" << endl;
                asmFile << "\t" << setw(8) << ".size" << symbol.second.name << ", 1" << endl;
                asmFile << symbol.second.name << ":" << endl;
                asmFile << "\t" << setw(8) << ".zero" << 1 << endl;
            }
            else if (symbol.second.type->type == SymbolType::POINTER)
            {
                asmFile << "\t" << setw(8) << ".globl" << symbol.second.name << endl;
                asmFile << "\t" << setw(8) << ".align" << 8 << endl;
                asmFile << "\t" << setw(8) << ".type" << symbol.second.name << ", @object" << endl;
                asmFile << "\t" << setw(8) << ".size" << symbol.second.name << ", 8" << endl;
                asmFile << symbol.second.name << ":" << endl;
                asmFile << "\t" << setw(8) << ".zero" << 8 << endl;
            }
            else if (symbol.second.type->type == SymbolType::ARRAY)
            {
                asmFile << "\t" << setw(8) << ".globl" << symbol.second.name << endl;
                asmFile << "\t" << setw(8) << ".bss" << endl;
                if (symbol.second.type->arrayType->type == SymbolType::INT_T)
                {
                    asmFile << "\t" << setw(8) << ".align" << 32 << endl;
                }
                else if (symbol.second.type->arrayType->type == SymbolType::CHAR_T)
                {
                    asmFile << "\t" << setw(8) << ".align" << 8 << endl;
                }
                else if (symbol.second.type->arrayType->type == SymbolType::POINTER)
                {
                    if (symbol.second.type->arrayType->type == SymbolType::INT_T)
                    {
                        asmFile << "\t" << setw(8) << ".align" << 16 << endl;
                    }
                    else if (symbol.second.type->arrayType->type == SymbolType::CHAR_T)
                    {
                        asmFile << "\t" << setw(8) << ".align" << 32 << endl;
                    }
                }

                asmFile << "\t" << setw(8) << ".type" << symbol.second.name << ", @object" << endl;
                asmFile << "\t" << setw(8) << ".size" << symbol.second.name << ", " << symbol.second.size << endl;
                asmFile << symbol.second.name << ":" << endl;
                asmFile << "\t" << setw(8) << ".zero" << symbol.second.size << endl;
            }
        }
    }
    map<int, string> label_map;
    int num_of_quad = 1, labelNum = 0;
    for (auto &quad : quadArray)
    {
        if (quad->op == "label")
        {
            label_map[num_of_quad] = ".LFB" + toString(labelNum);
        }
        else if (quad->op == "labelend")
        {
            label_map[num_of_quad] = ".LFE" + toString(labelNum);
            labelNum++;
        }
        num_of_quad++;
    }
    for (auto &quad : quadArray)
    {
        if (quad->op == "goto" or quad->op == "==" or quad->op == "!=" or quad->op == "<" or quad->op == ">" or quad->op == "<=" or quad->op == ">=")
        {
            int loc = stoi(quad->result);
            if (label_map.find(loc) == label_map.end())
            {
                label_map[loc] = ".L" + toString(labelNum);
                labelNum++;
            }
        }
    }

    bool setText = false;
    
    string strtemp;
    
    int inttemp, chartemp;
    
    string fun_label;
    
    stack<string> params;
    
    num_of_quad = 1;

    for (auto &quad : quadArray)
    {
        asmFile <<"#\t" << quad->result<<" = "<<quad->arg1<<" "<<quad->op<<" "<<quad->arg2<<endl;
        if (quad->op == "label")
        {
            if (!setText)
            {
                asmFile << "\t.text" << endl;
                setText = true;
            }

            // set the new currentTable
            currentTable = globalTable->search(quad->result)->nestedTable;

            // the activationRecord of the current function
            curr_ar = currentTable->activationRecord;

            fun_label = label_map[num_of_quad];
            fun_label[3] = 'E';

            // printing the prolog
            asmFile << "\t" << setw(8) << ".globl" << quad->result << endl;
            asmFile << "\t" << setw(8) << ".type" << quad->result << ", @function" << endl;
            
            // printing the name of function
            asmFile << quad->result << ":" << endl;
            asmFile << label_map[num_of_quad] << ":" << endl;
            
            // indicates the start of new procedure
            asmFile << "\t"
                    << ".cfi_startproc" << endl;
            
            // saving the value of base pointer in the stack
            asmFile << "\t" << setw(8) << "pushq"
                    << "%rbp" << endl;
            
            // setting a 16 byte offset from the current stack pointer
            asmFile << "\t.cfi_def_cfa_offset 16" << endl;
            asmFile << "\t.cfi_offset 6, -16" << endl;
            
            // moves the value of rps into rbp, i.e. changing the base pointer to the current stack pointer
            asmFile << "\t" << setw(8) << "movq" << "%rsp, %rbp" << endl;
            
            // to indicate that rbp register is the current frame pointer ???
            asmFile << "\t.cfi_def_cfa_register 6" << endl;

            // setting the rsp for the function: rsp = $ - totalDisplacement
            asmFile << "\t" << setw(8) << "subq" << "$" << (-1)*curr_ar->totalDisplacement << ", %rsp" << endl;

            // debugging purpose
            asmFile << "#\t" << currentTable->parameters.size() << endl;

            int number = 1;
            
            // moving all the parameters from stack to the registers 
            for (auto param : currentTable->parameters)
            {
                parameter(param, number);
                number++;
            }
        }
        else if (quad->op == "labelend")
        {
            // printing the epilogue
            /*the epilogue is the portion of a function's code that is executed after the 
            function has completed its main task and is about to return control to its caller. 
            It is typically responsible for cleaning up the stack and restoring any saved 
            register values.*/
            asmFile << label_map[num_of_quad] << ":" << endl;

            // rsp = rbp to reset the stack frame
            asmFile << "\t" << setw(8) << "movq"
                    << "%rbp, %rsp" << endl;

            // restoring the rbp from the stack
            asmFile << "\t" << setw(8) << "popq"
                    << "%rbp" << endl;
            asmFile << "\t"
                    << ".cfi_def_cfa 7, 8" << endl;

            // printing that it is return of the function
            asmFile << "\t"
                    << "ret" << endl;

            // generates a directive to the CFI (call frame information) system indicating the end of the function's call frame
            asmFile << "\t" << ".cfi_endproc" << endl;
            asmFile << "\t" << setw(8) << ".size" << quad->result << ", .-" << quad->result << endl;

            setText = false;
        }
        else
        {
            // if we are inside the function:
            if (setText)
            {
                string op = quad->op;
                string result = quad->result;
                string arg1 = quad->arg1;
                string arg2 = quad->arg2;

                if (label_map.count(num_of_quad))
                {
                    asmFile << label_map[num_of_quad] << ":" << endl;
                }

                if (op == "=")
                {
                    // to check if the arg1 is an integer
                    if (isdigit(arg1[0]))
                    {
                        // integer constant
                        asmFile << "\t" << setw(8) << "movl"
                                << "$" << arg1 << ", " << stack_location(result) << endl;
                    }
                    // to check if arg1 is escape sequence
                    else if (arg1[0] == '\'')
                    {
                        // character constant
                        asmFile << "\t" << setw(8) << "movb"
                                << "$" << get_ascii(arg1) << ", " << stack_location(result) << endl;
                    }
                    else
                    {
                        int sz = currentTable->search(arg1)->size;
                        if (sz == 1)
                        {
                            asmFile << "\t" << setw(8) << "movb" << stack_location(arg1) << ", %al" << endl;
                            asmFile << "\t" << setw(8) << "movb"<< "%al, " << stack_location(result) << endl;
                        }
                        else if (sz == 4)
                        {
                            asmFile << "\t" << setw(8) << "movl" << stack_location(arg1) << ", %eax" << endl;
                            asmFile << "\t" << setw(8) << "movl" << "%eax, " << stack_location(result) << endl;
                        }
                        else if (sz == 8)
                        {
                            asmFile << "\t" << setw(8) << "movq" << stack_location(arg1) << ", %rax" << endl;
                            asmFile << "\t" << setw(8) << "movq" << "%rax, " << stack_location(result) << endl;
                        }
                    }
                }
                else if (op == "=str")
                {
                    // mov the string value at .LC{arg1} to stack_location of the result
                    // here the value of arg1 is the index of this string in the stringLiterals
                    asmFile << "\t" << setw(8) << "movq" << "$.LC" << arg1 << ", " << stack_location(result) << endl;
                }
                else if (op == "param")
                {
                    params.push(result);
                }
                // calling another function
                else if (op == "call")
                {
                    int paramCount = stoi(arg2);    // arg2 contains the number of arguments
                    while (paramCount)
                    {
                        // storing all the parameters in the registers
                        storing_paramter(params.top(), paramCount);
                        params.pop();
                        paramCount--;
                    }
                    asmFile << "\t" << setw(8) << "call" << arg1 << endl;

                    // register 'a' contains the return value of the function
                    // now after calling the function, we are storing the return value of the function in the result variable

                    int sz = currentTable->search(result)->size;
                    if (sz == 1)
                    {
                        asmFile << "\t" << setw(8) << "movb"
                                << "%al, " << stack_location(result) << endl;
                    }
                    else if (sz == 4)
                    {
                        asmFile << "\t" << setw(8) << "movl"
                                << "%eax, " << stack_location(result) << endl;
                    }
                    else if (sz == 8)
                    {
                        asmFile << "\t" << setw(8) << "movq"
                                << "%rax, " << stack_location(result) << endl;
                    }
                }
                else if (op == "return")
                {
                    if (!result.empty())
                    {
                        int sz = currentTable->search(result)->size;
                        if (sz == 1)
                        {
                            asmFile << "\t" << setw(8) << "movb" << stack_location(result) << ", %al" << endl;
                        }
                        else if (sz == 4)
                        {
                            asmFile << "\t" << setw(8) << "movl" << stack_location(result) << ", %eax" << endl;
                        }
                        else if (sz == 8)
                        {
                            asmFile << "\t" << setw(8) << "movq" << stack_location(result) << ", %rax" << endl;
                        }
                    }
                    // jumping directly to the 'labelend' label
                    if (quadArray[num_of_quad]->op != "labelend")
                        asmFile << "\t" << setw(8) << "jmp" << fun_label << endl;
                }
                else if (op == "goto")
                {
                    asmFile << "\t" << setw(8) << "jmp" << label_map[stoi(result)] << endl;
                }
                else if (op == "==" or op == "!=" or op == "<" or op == "<=" or op == ">" or op == ">=")
                {
                    // check if arg1 == arg2
                    int sz = currentTable->search(arg1)->size;
                    string movins, cmpins, movreg;
                    if (sz == 1)
                    {
                        movins = "movb";
                        cmpins = "cmpb";
                        movreg = "%al";
                    }
                    else if (sz == 4)
                    {
                        movins = "movl";
                        cmpins = "cmpl";
                        movreg = "%eax";
                    }
                    else if (sz == 8)
                    {
                        movins = "movq";
                        cmpins = "cmpq";
                        movreg = "%rax";
                    }
                    // printing instructions for comparision between the arguments
                    // arg2 is moved to mov_reg (an 'a' register), then
                    // cmpl/cmpx/cmpq arg2, arg1
                    // here in AT&T we use arg1-arg2 as the result to determine flag
                    asmFile << "\t" << setw(8) << movins << stack_location(arg2) << ", " << movreg << endl;
                    asmFile << "\t" << setw(8) << cmpins << movreg << ", " << stack_location(arg1) << endl;
                    // deciding the jump label
                    if (op == "==")
                    {
                        asmFile << "\t" << setw(8) << "je" << label_map[stoi(result)] << endl;
                    }
                    else if (op == "!=")
                    {
                        asmFile << "\t" << setw(8) << "jne" << label_map[stoi(result)] << endl;
                    }
                    else if (op == "<")
                    {
                        asmFile << "\t" << setw(8) << "jl" << label_map[stoi(result)] << endl;
                    }
                    else if (op == "<=")
                    {
                        asmFile << "\t" << setw(8) << "jle" << label_map[stoi(result)] << endl;
                    }
                    else if (op == ">")
                    {
                        asmFile << "\t" << setw(8) << "jg" << label_map[stoi(result)] << endl;
                    }
                    else if (op == ">=")
                    {
                        asmFile << "\t" << setw(8) << "jge" << label_map[stoi(result)] << endl;
                    }
                }
                else if (op == "+")
                {
                    // result = arg1 + arg2
                    asmFile << "\t" << setw(8) << "movl" << stack_location(arg1) << ", "
                            << "%eax" << endl;
                    asmFile << "\t" << setw(8) << "addl" << stack_location(arg2) << ", "
                            << "%eax" << endl;
                    asmFile << "\t" << setw(8) << "movl"
                            << "%eax"
                            << ", " << stack_location(result) << endl;                    
                }
                else if (op == "-")
                {
                    // result = arg1 - arg2
                    asmFile << "\t" << setw(8) << "movl" << stack_location(arg1) << ", "
                            << "%eax" << endl;
                    asmFile << "\t" << setw(8) << "subl" << stack_location(arg2) << ", "
                            << "%eax" << endl;
                    asmFile << "\t" << setw(8) << "movl"
                            << "%eax"
                            << ", " << stack_location(result) << endl;
                }
                else if (op == "*")
                {
                    // result = arg1 * arg2
                    asmFile << "\t" << setw(8) << "movl" << stack_location(arg1) << ", "
                            << "%eax" << endl;
                    
                    // $ is used for direct addressing
                    if (isdigit(arg2[0]))
                    {
                        asmFile << "\t" << setw(8) << "imull" << "$" + stack_location(arg2) << ", "
                                << "%eax" << endl;
                    }
                    else
                    {
                        asmFile << "\t" << setw(8) << "imull" << stack_location(arg2) << ", "
                                << "%eax" << endl;
                    }
                    asmFile << "\t" << setw(8) << "movl"
                            << "%eax"
                            << ", " << stack_location(result) << endl;
                }
                else if (op == "/")
                {
                    // result = arg1  / arg2
                    asmFile << "\t" << setw(8) << "movl" << stack_location(arg1) << ", "
                            << "%eax" << endl;
                    
                    // cdq : convert double to quadword
                    //  the "cdq" instruction is used to extend the sign of %eax into %edx:%eax, which is required for signed division.
                    asmFile << "\t" << setw(8) << "cdq" << endl;
                    asmFile << "\t" << setw(8) << "idivl" << stack_location(arg2) << endl;
                    // eax contains the integral quotient of the '/'
                    asmFile << "\t" << setw(8) << "movl"
                            << "%eax"
                            << ", " << stack_location(result) << endl;
                }
                else if (op == "%")
                {
                    // result = arg1 % arg2
                    asmFile << "\t" << setw(8) << "movl" << stack_location(arg1) << ", "
                            << "%eax" << endl;
                    asmFile << "\t" << setw(8) << "cdq" << endl;
                    asmFile << "\t" << setw(8) << "idivl" << stack_location(arg2) << endl;
                    // note: the remainder is stored in edx register
                    asmFile << "\t" << setw(8) << "movl"
                            << "%edx"
                            << ", " << stack_location(result) << endl;
                }
                else if (op == "=[]")
                {
                    // result = arg1[arg2]
                    Symbol* symbol = currentTable->search(arg1);
                    asmFile << "\t" << setw(8) << "movl" << stack_location(arg2) << ", "
                            << "%eax" << endl;
                    // to sign-extend the value of the %eax register to the larger %rax register
                    asmFile << "\t" << setw(8) << "cltq" << endl;
                    if (symbol->category == Symbol::GLOBAL)
                    {
                        asmFile << "\t" << setw(8) << "leaq" << arg1 << "(%rip) , %rdx" << endl;
                        // rip = base address, rdx = offset
                        asmFile << "\t" << setw(8) << "movl" << "(%rax, %rdx)"
                                << ", "
                                << "%eax" << endl;
                    }
                    else
                    {
                        asmFile << "\t" << setw(8) << "movl" << curr_ar->displacement[arg1] << "(%rbp, %rax, 1)"
                                << ", "
                                << "%eax" << endl;
                    }
                    asmFile << "\t" << setw(8) << "movl"
                            << "%eax"
                            << ", " << stack_location(result) << endl;
                }
                else if (op == "[]=")
                {
                    Symbol* symbol = currentTable->search(result);
                    asmFile << "\t" << setw(8) << "movl" << stack_location(arg1) << ", "
                            << "%eax" << endl;
                    asmFile << "\t" << setw(8) << "cltq" << endl;
                    asmFile << "\t" << setw(8) << "movl" << stack_location(arg2) << ", "
                            << "%ebx" << endl;
                    if (symbol->category == Symbol::GLOBAL)
                    {
                        asmFile << "\t" << setw(8) << "leaq" << result << "(%rip) , %rdx" << endl;
                        asmFile << "\t" << setw(8) << "movl"
                                << "%ebx"
                                << ", "
                                << "(%rax,%rdx)" << endl;
                    }
                    else
                    {
                        asmFile << "\t" << setw(8) << "movl"
                                << "%ebx"
                                << ", " << curr_ar->displacement[result] << "(%rbp, %rax,1)" << endl;
                    }
                }
                else if (op == "=&")
                {
                    // result = &arg1

                    Symbol* symbol = currentTable->search(arg1);
                    // result = &arg1
                    if (symbol->type->type == SymbolType::ARRAY)
                    {
                        if (symbol->category == Symbol::GLOBAL)
                        {
                            asmFile << "\t" << setw(8) << "leaq" << arg1 << "(%rip) , %rdx" << endl;
                            asmFile << "\t" << setw(8) << "leaq"
                                    << "(%rax,%rdx)"
                                    << ", "
                                    << "%rax" << endl;
                        }
                        else
                        {
                            asmFile << "\t" << setw(8) << "movl" << stack_location(arg2) << ", %eax" << endl;
                            asmFile << "\t" << setw(8) << "leaq" << to_string(curr_ar->displacement[arg1]) << "(%rax,%rbp)"
                                    << ", "
                                    << "%rax" << endl;
                        }
                        asmFile << "\t" << setw(8) << "movq"
                                << "%rax"
                                << ", " << stack_location(result) << endl;
                    }else{
                        asmFile << "\t" << setw(8) << "leaq" << stack_location(arg1) << ", "
                                << "%rax" << endl;
                        asmFile << "\t" << setw(8) << "movq"
                                << "%rax"
                                << ", " << stack_location(result) << endl;
                    }
                }
                else if (op == "=*")
                {
                    // result = *arg1
                    asmFile << "\t" << setw(8) << "movq" << stack_location(arg1) << ", "
                            << "%rax" << endl;
                    asmFile << "\t" << setw(8) << "movl"
                            << "(%rax)"
                            << ", "
                            << "%eax" << endl;
                    asmFile << "\t" << setw(8) << "movl"
                            << "%eax"
                            << ", " << stack_location(result) << endl;
                }
                else if (op == "=-")
                {
                    // result = -arg1
                    asmFile << "\t" << setw(8) << "movl" << stack_location(arg1) << ", "
                            << "%eax" << endl;
                    asmFile << "\t" << setw(8) << "negl"
                            << "%eax" << endl;
                    asmFile << "\t" << setw(8) << "movl"
                            << "%eax"
                            << ", " << stack_location(result) << endl;
                }
                else if (op == "*=")
                {
                    // *result = arg1
                    asmFile << "\t" << setw(8) << "movl" << stack_location(arg1) << ", "
                            << "%eax" << endl;
                    asmFile << "\t" << setw(8) << "movq" << stack_location(result) << ", "
                            << "%rbx" << endl;
                    asmFile << "\t" << setw(8) << "movl"
                            << "%eax"
                            << ", "
                            << "(%rbx)" << endl;
                }
            }
            else
            {
                currentSymbol = globalTable->search(quad->result);
                if (currentSymbol->category == Symbol::TEMPORARY)
                {
                    if (currentSymbol->type->type == SymbolType::INT_T)
                    {
                        inttemp = stoi(quad->arg1);
                    }
                    else if (currentSymbol->type->type == SymbolType::CHAR_T)
                    {
                        chartemp = get_ascii(quad->arg1);
                    }
                    else if (currentSymbol->type->type == SymbolType::POINTER)
                    {
                        strtemp = ".LC" + quad->arg1;
                    }
                }
                else
                {
                    if (currentSymbol->type->type == SymbolType::INT_T)
                    {
                        asmFile << "\t" << setw(8) << ".globl" << currentSymbol->name << endl;
                        asmFile << "\t" << setw(8) << ".data" << endl;
                        asmFile << "\t" << setw(8) << ".align" << 4 << endl;
                        asmFile << "\t" << setw(8) << ".type" << currentSymbol->name << ", @object" << endl;
                        asmFile << "\t" << setw(8) << ".size" << currentSymbol->name << ", 4" << endl;
                        asmFile << currentSymbol->name << ":" << endl;
                        asmFile << "\t" << setw(8) << ".long" << inttemp << endl;
                    }
                    else if (currentSymbol->type->type == SymbolType::CHAR_T)
                    {
                        asmFile << "\t" << setw(8) << ".globl" << currentSymbol->name << endl;
                        asmFile << "\t" << setw(8) << ".data" << endl;
                        asmFile << "\t" << setw(8) << ".type" << currentSymbol->name << ", @object" << endl;
                        asmFile << "\t" << setw(8) << ".size" << currentSymbol->name << ", 1" << endl;
                        asmFile << currentSymbol->name << ":" << endl;
                        asmFile << "\t" << setw(8) << ".byte" << chartemp << endl;
                    }
                    else if (currentSymbol->type->type == SymbolType::POINTER)
                    {
                        asmFile << "\t"
                                << ".section	.data.rel.local" << endl;
                        asmFile << "\t" << setw(8) << ".align" << 8 << endl;
                        asmFile << "\t" << setw(8) << ".type" << currentSymbol->name << ", @object" << endl;
                        asmFile << "\t" << setw(8) << ".size" << currentSymbol->name << ", 8" << endl;
                        asmFile << currentSymbol->name << ":" << endl;
                        asmFile << "\t" << setw(8) << ".quad" << strtemp << endl;
                    }
                }
            }
        }

        num_of_quad++;
    }

    asmFile.close();
}

int main(int argc, char const *argv[])
{
    in_file = string(argv[1]) + ".c";

    asm_file = string(argv[1]) + ".s";

    tableCount = 0;
    temporaryCount = 0;

    globalTable = new SymbolTable("global");
    currentTable = globalTable;

    cout << left;

    yyin = fopen(in_file.c_str(), "r");
    
    // yydebug = 1;

    yyparse();

    globalTable->calculateOffset();

    globalTable->print();

    finalBackpatch();

    int ins = 1;
    cout << string(140, '=') << endl;
    cout << string(30,' ') << "Quad Array" << endl;
    cout << string(140, '=') << endl;

    cout<<setw(20)<<"Op"<<setw(20)<<"arg1"<<setw(20)<<"arg2"<<setw(20)<<"result"<<setw(20)<<"Index"<<setw(20)<<"Code in text\n";
    cout<<setw(0) << string(140, '-') << endl;   

    for (auto it : quadArray)
    {
        cout << setw(20);
        it->print(ins);
        ins++;
    }

    translate();

    return 0;
}