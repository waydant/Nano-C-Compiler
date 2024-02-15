#include "A6_31_translator.h"

vector<Quad *> quadArray;                       
SymbolTable *currentTable, *globalTable; 
Symbol *currentSymbol;                   
SymbolType::typeEnum currentType;        
int tableCount, temporaryCount;          
vector<string> stringLiterals;

ActivationRecord::ActivationRecord() : totalDisplacement(0), displacement(map<string, int>()) {} // start with an initial displacement of 0

SymbolType::SymbolType(typeEnum type, SymbolType *arrayType, int width) : type(type), width(width), arrayType(arrayType) {}

int SymbolType::getSize()
{
    if (type == CHAR_T)
        return 1;
    else if (type == INT_T)
        return 4;
    else if (type == POINTER)
        return 8;
    else if (type == ARRAY)
        return width * (arrayType->getSize());
    else
        return 0;
}

string SymbolType::toString()
{
    if (type == SymbolType::VOID_T)
        return "void";
    else if (type == SymbolType::CHAR_T)
        return "char";
    else if (type == SymbolType::INT_T)
        return "int";
    else if (type == SymbolType::POINTER)
        return "ptr(" + arrayType->toString() + ")";
    else if (type == SymbolType::FUNCTION)
        return "function";
    else if (type == SymbolType::ARRAY)
        return "array(" + to_string(width) + ", " + arrayType->toString() + ")";
    else if (type == SymbolType::BLOCK)
        return "block";
    return "";
}


SymbolTable::SymbolTable(string name, SymbolTable *parent) : name(name), parent(parent) {}

Symbol *SymbolTable::search(string name)
{
    // if symbol already present
    if(symbols.find(name) != symbols.end()){
        auto it1 = symbols.find(name);
        return &(it1->second);
    }

    Symbol *ret_ptr = nullptr;

    // recursively check if the symbol is present in it's parent symbol table
    if (parent != NULL)
        ret_ptr = parent->search(name);

    // if not declared in any symbol table, then insert it as a new symbol
    if (this == currentTable && !ret_ptr)
    {
        ret_ptr = new Symbol(name);
        ret_ptr->category = Symbol::LOCAL;
        if(currentTable == globalTable){
            ret_ptr->category = Symbol::GLOBAL;
        }
        symbols.insert({name, *ret_ptr});
        return &(symbols.find(name)->second);
    }
    return ret_ptr;
}

Symbol *SymbolTable::search1(string name)
{
    
    if( symbols.find(name) != symbols.end() ){
        auto it1 = symbols.find(name);
        return &(it1->second);
    }

    // Symbol *ret_ptr = nullptr;

    // as for declaration no need to search the parent table
    
    symbols.insert({name, *(new Symbol(name))});
    return &(symbols.find(name)->second);
    // return ret_ptr;
}

void SymbolTable::calculateOffset()
{
    int offset;
    vector<SymbolTable *> nestedTables;
    // traversing over the symbol table
    for(auto &x: symbols){
        
        if(x.first == symbols.begin()->first){
            x.second.offset = 0;
            if(x.second.category != Symbol::FUNCTION)
                offset = x.second.size;
            else{
                x.second.size = 0;
                offset = 0;
            }
        }else{
            x.second.offset = offset;
            if(x.second.category != Symbol::FUNCTION)
                offset += x.second.size;
            else{
                x.second.size=0;
            }
        }
        if(x.second.nestedTable){
            nestedTables.push_back(x.second.nestedTable);
        }
    }


    activationRecord = new ActivationRecord();

    for (auto map_entry : symbols)
    {
        if (map_entry.second.category == Symbol::PARAMETER)
        {
            if (map_entry.second.size != 0)
            {
                activationRecord->totalDisplacement -= map_entry.second.size;
                activationRecord->displacement[map_entry.first] = activationRecord->totalDisplacement;
                // cout<<"yahoo!! "<<map_entry.first<<endl;
            }
        }
    }

    for (auto map_entry : symbols)
    {
        if ((map_entry.second.category == Symbol::LOCAL && map_entry.second.name != "return") || map_entry.second.category == Symbol::TEMPORARY)
        {
            if (map_entry.second.size != 0)
            {
                activationRecord->totalDisplacement -= map_entry.second.size;
                activationRecord->displacement[map_entry.first] = activationRecord->totalDisplacement;
            }
        }
    }

    for (auto &table : nestedTables)
    {
        table->calculateOffset();
    }
}

void SymbolTable::print()
{
    cout << string(140, '-') << endl;
    cout << "Symbol Table Name: " << setw(100)<< name << "Parent Name: " << ((parent) ? parent->name : "None") << endl;
    cout << string(140, '-') << endl;
    cout << setw(20) << "Name" << setw(40) << "Type" <<setw(20)<<"Category"<< setw(20) << "Initial Value" << setw(20) << "Offset" << setw(20) << "Size" << setw(20) << "Nested Table"
         << "\n\n";
    
    // to store tables which are called in this currentTable
    vector<SymbolTable *> tovisit;

    // traversing the currentSymbolTable
    for (auto &x : symbols)
    {
        cout << setw(20) << x.first;            // printing the name of the symbol
        fflush(stdout);

        if(x.second.category != Symbol::FUNCTION )
            cout<<setw(40)<<x.second.type->toString();
        else{

            string tempstr = "(";
            // cout<<setw(40)<<x.second.type->toString();
            SymbolTable* temp = globalTable->search(x.first)->nestedTable;
            // cout<<"( ";
            bool chk1=false;;
            vector<string> vs1;
            for(auto y : temp->symbols){
                if(y.second.category == Symbol::PARAMETER){
                    // tempstr += y.second.type->toString();
                    vs1.push_back(y.second.type->toString());
                    // tempstr += " x "; 
                }
            }

            for(int i=0;i<vs1.size();i++){
                tempstr += vs1[i];
                if(i!=(vs1.size()-1)){
                    tempstr += " x ";
                }
            }
            tempstr+=") --> ("+ x.second.type->toString()+")";
            if(vs1.size()){
                chk1=true;
                cout<<setw(40)<<tempstr;
            }else{
                cout<<setw(40)<<x.second.type->toString();
            }

            // cout<<" )";
            // cout<<setw(40);
            // SymbolType *curr = x.second.type->paramType;
            // while(curr){
            //     curr = curr->paramType;
            // }
        }

        cout<<setw(20);
        if(x.second.category == Symbol::LOCAL){
            cout<<"local";
        }else if(x.second.category == Symbol::GLOBAL){
            cout<<"global";
        }else if(x.second.category == Symbol::FUNCTION){
            cout<<"function";
        }else if(x.second.category == Symbol::PARAMETER){
            cout<<"parameter";
        }else if(x.second.category == Symbol::TEMPORARY){
            cout<<"temporary";
        }

        cout << setw(20) << x.second.initialValue << setw(20) << x.second.offset << setw(20) << x.second.size;
        cout << setw(20) << (x.second.nestedTable ? x.second.nestedTable->name : "NULL") << endl;
        if (x.second.nestedTable)
        {
            tovisit.push_back(x.second.nestedTable);
        }
    }
    cout << string(140, '-') << endl;
    cout <<"\n\n";

    // recursively print all symbol tables
    for (auto &table : tovisit)
    {
        table->print();
    }
}

Symbol::Symbol(string name, SymbolType::typeEnum type, string init) : name(name), type(new SymbolType(type)), offset(0), nestedTable(NULL), initialValue(init)
{
    size = this->type->getSize();
}

Symbol *Symbol::update(SymbolType *type)
{
    this->type = type;
    size = this->type->getSize();
    return this;
}

Symbol *Symbol::convert(SymbolType::typeEnum targetType)
{
    if ((type)->type == SymbolType::INT_T && targetType == SymbolType::CHAR_T)
    {
        Symbol *fin_ = gentemp(targetType);
        emit("=", fin_->name, "INT_TO_CHAR(" + name + ")");
        return fin_;
    }
    else if ((type)->type == SymbolType::CHAR_T && targetType == SymbolType::INT_T)
    {
        Symbol *fin_ = gentemp(targetType);
        emit("=", fin_->name, "CHAR_TO_INT(" + name + ")");
        return fin_;
    }
    return this;
}


Quad::Quad(string result, string arg1, string op, string arg2) : result(result), op(op), arg1(arg1), arg2(arg2) {}
Quad::Quad(string result, int arg1, string op, string arg2) : result(result), op(op), arg1(toString(arg1)), arg2(arg2) {}

void Quad::print(int idx)
{

    cout<<setw(20)<<op<<setw(20)<<arg1<<setw(20)<<arg2<<setw(20)<<result<<setw(20)<<idx;

    if (op == "=")
    {
        cout << "\t" << result << " = " << arg1 << endl;
    }
    else if (op == "goto")
    {
        cout << "\tgoto " << result << endl;
    }
    else if (op == "return")
    {
        cout << "\treturn " << result << endl;
    }
    else if (op == "call")
    {
        cout << "\t" << result << " = call " << arg1 << ", " << arg2 << endl;
    }
    else if (op == "param")
    {
        cout << "\t" << "param " << result << endl;
    }
    else if (op == "label")
    {
        cout <<"FUNCTION START: "<< result << endl;
    }
    else if (op == "labelend")
    {
        cout <<"FUNCTION END: "<< result << endl;
    }
    else if (op == "=[]")
    {
        cout << "\t" << result << " = " << arg1 << "[" << arg2 << "]" << endl;
    }
    else if (op == "[]=")
    {
        cout << "\t" << result << "[" << arg1 << "] = " << arg2 << endl;
    }
    else if (op == "+" or op == "-" or op == "*" or op == "/" or op == "%")
    {
        cout << "\t" << result << " = " << arg1 << " " << op << " " << arg2 << endl;
    }
    else if (op == "==" or op == "!=" or op == "<" or op == ">" or op == "<=" or op == ">=")
    {
        cout << "\tif " << arg1 << " " << op << " " << arg2 << " goto " << result << endl;
    }
    else if (op == "=&" or op == "=*")
    {
        cout << "\t" << result << " " << op[0] << " " << op[1] << arg1 << endl;
    }
    else if (op == "*=")
    {
        cout << "\t*" << result << " = " << arg1 << endl;
    }
    else if (op == "=-")
    {
        cout << "\t" << result << " = - " << arg1 << endl;
    }
    else if (op == "=str")
    {
        cout << "\t" << result << " = " << stringLiterals[(atoi(arg1.c_str()))]<<endl;
    }
    else if (op == "!")
    {
        cout << "\t" << result << " = ! " << arg1 << endl;
    }
    else
    {
        cout << op << arg1 << arg2 << result << endl;
        cout << "INVALID OPERATOR\n";
    }
}

void emit(string op, string result, string arg1, string arg2)
{
    Quad *q = new Quad(result, arg1, op, arg2);
    quadArray.push_back(q);
}
void emit(string op, string result, int arg1, string arg2)
{
    Quad *q = new Quad(result, arg1, op, arg2);
    quadArray.push_back(q);
}

void backpatch(list<int> list_, int addr)
{
    for (auto &i : list_)
    {
        quadArray[i - 1]->result = toString(addr);
    }
}

void finalBackpatch()
{
    int curPos = quadArray.size();
    int lastExit = -1;
    for (auto it = quadArray.rbegin(); it != quadArray.rend(); it++)
    {
        string op = (*it)->op;
        if (op == "labelend")
        {
            lastExit = curPos;
        }
        else if (op == "goto" or op == "==" or op == "!=" or op == "<" or op == ">" or op == "<=" or op == ">=")
        {
            if ((*it)->result.empty())
            {
                (*it)->result = toString(lastExit);
            }
        }
        curPos--;
    }
}

list<int> makeList(int base)
{
    list<int> buff;
    buff.push_back(base);
    return buff;
}

list<int> merge(list<int> first, list<int> second)
{
    list<int> ret = first;
    ret.merge(second);
    return ret;
}

void Expression::toInt()
{
    if (type == Expression::typeEnum::BOOLEAN)
    {
        symbol = gentemp(SymbolType::typeEnum::INT_T);
        backpatch(trueList, nextInstruction());
        emit("=", symbol->name, "true");
        emit("goto", toString(nextInstruction()+1));
        backpatch(falseList, nextInstruction());
        emit("=", symbol->name, "false");
    }
}

void Expression::toBool()
{
    if (type == Expression::typeEnum::NONBOOLEAN)
    {
        falseList = makeList(nextInstruction());
        emit("==", "", symbol->name, "0");
        trueList = makeList(nextInstruction());
        emit("goto", "");
    }
}

int nextInstruction()
{
    return quadArray.size() + 1;
}

Symbol *gentemp(SymbolType::typeEnum type, string intialValue)
{
    Symbol *temp = new Symbol("t" + toString(temporaryCount++), type, intialValue);
    temp->category = Symbol::TEMPORARY;
    currentTable->symbols.insert({temp->name, *temp});
    return temp;
}

void changeTable(SymbolTable *table)
{
    currentTable = table;
}

bool type_comp(SymbolType* first,SymbolType* second){
    if(!first and !second){
        return true;
    }else if(!first or !second or first->type != second->type){
        return false;
    }else{
        return type_comp(first->arrayType, second->arrayType);
    }
}


bool typeCheck(Symbol *&a, Symbol *&b)
{
    if (type_comp(a->type, b->type))
        return true;
    else if (a->type->type == SymbolType::INT_T or b->type->type == SymbolType::INT_T)
    {
        a = a->convert(SymbolType::INT_T);
        b = b->convert(SymbolType::INT_T);
        return true;
    }
    else
    {
        return false;
    }
}


string toString(int i)
{
    return to_string(i);
}


string toString(char c)
{
    return string(1, c);
}