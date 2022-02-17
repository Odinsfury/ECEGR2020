#include <stdio.h>

// Declare Global Variable
int theArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Reverse Array Function
void ReverseArray(int theArray[], int start, int end)
{
    int i;
    int theOtherArray[10];
    
    
    while (start < end)
    {
        i = theArray[start];
        theArray[start] = theArray[end];
        theArray[end] = i;
        start++;
        end--;
    }
}


void printArray(int theArray[], int size)
{
    int j;
    
    for (j = 0; j < size; j++)
    {
    printf("%d ", theArray[j]);
    }
    
    printf("\n");
}

int main()
{
    int n = sizeof(theArray) / sizeof(theArray[0]);
    printf("Original Array: ");
    printArray(theArray, n);
    ReverseArray(theArray, 0, n-1);
    printf("Reversed Array: ");
    printArray(theArray, n);
    return 0;
}