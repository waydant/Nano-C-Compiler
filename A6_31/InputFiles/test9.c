int printStr (char *ch);
int printInt (int n);
int readInt (int *eP);

int arr[20]; // Global array

void swap(int *p, int *q)
{ /* Swap two numbers */
    int t = *p;
    *p = *q;
    *q = t;
}
void readArray(int size)
{ /* Function to read an array */
    int i;
    int m;
    for (i = 0; i < size; i = i + 1)
    {
        printStr("Input next element\n");
        m = readInt(&m);
	arr[i] = m;
    }
}

void printArray(int size)
{ /* Function to print an array */
    int i;
    for (i = 0; i < size; i = i + 1)
    {
        printInt(arr[i]);
        printStr(" ");
    }
    printStr("\n");
}

void bubbleSort(int n)
{ /* A function to implement bubble sort */
    int i;
    int j;
    for (i = 0; i < n - 1; i = i + 1)
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j = j + 1)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
// Driver program to test above functions
int main()
{
    int n;
    printStr("Input array size: \n");
    readInt(&n);
    printStr("Input array elements: \n");
    readArray(n);
    printStr("Input array: \n");
    printArray(n);
    bubbleSort(n);
    printStr("Sorted array: \n");
    printArray(n);
    return 0;
}

