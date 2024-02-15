int arr[10]; // Sorted array to search
/* A recursive binary search function. It returns location of x
 in given array arr[l..r] is present, otherwise -1 */

 
int binarySearch(int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        // If the element is present at the middle itself
        if (arr[mid] == x)
return mid;
        // If element is smaller than mid, then it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(l, mid - 1, x);
        // Else the element can only be present in right subarray
        return binarySearch(mid + 1, r, x);
    }
    // We reach here when element is not present in array
return -1; }

void use_for_loop(int n){
    for(int i=0;i<n;i++){
        printStr("Used for loop !\n");
    }
}

void swap(int *p, int *q) {
    int t;
    t = *p;
    *p = *q;
    *q = t;
    return;
}

/* 
This is a Multi line comment 
*/

int main() {
    int n; // Number of elements
    printStr("Give the number of elements: \n");
    readInt(&n);
    
    Classroom->student = "Vedant";

    char c;     //checking char identifier

    arr[0] = 2;
    arr[1] = 3;
    arr[2] = 4;
    arr[3] =10;
    arr[4] = 40;
    int x = 10; // Key to search
    int result = binarySearch(0, n - 1, x);
    if (result == -1)
        printStr("Element is not present in array");
    else {
        printStr("Element is present at index ");
        printStr('Hello'); //Char_const
        printInt(result);
    }

    use_for_loop(n);

    int x = 2;
    int y = 3;
    int z = 1;
    int m;
    m = x > y? x: y;  //>,?,:
    m = m > z? m: z;
    if(x != y && y != z && z != x){
        printStr("Not Equal");
    }
    z = z % 3;

    if(x == y || y==z){
        printInt(x);
    }


return 0; 
}