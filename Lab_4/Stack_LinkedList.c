#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int globalCount;
int count = 1;

typedef struct Stack
{
    int        maxsize;
    int            top;
    float        value;
    struct Stack *next;
} Stack;


Stack* firstStack = NULL;


Stack* createStack(int value)
{
    Stack*   newStack = NULL;
    
    // Create new student
    newStack = (Stack *) malloc( sizeof(Stack) );
    
    if( newStack != NULL)
    {
        newStack->value = value;
        newStack->next = NULL;
    }
    
    return newStack;
}


// Add a Node to the end of the list
void addStack(Stack* newStack)
{
    
    Stack* currentStack = firstStack;
    
    // Check for empty list
    if( firstStack == NULL )
    {
        firstStack = newStack;
        return;
    }
    
    // Loop to end of list
    while( currentStack->next != NULL )
        currentStack = currentStack->next;
        
    // Add new node to end
    currentStack->next = newStack;
    
    count++;
    globalCount = count;
}


// Insert a node into the list
void insertStack(Stack* afterStack, Stack* newStack)
{
    // Update the newNode next
    newStack->next = afterStack->next;
    
    // Update afterNode next
    afterStack->next = newStack;
}


// Delete a node from the list
void deleteStack(Stack* deleteStack)
{
    Stack* currentStack = firstStack;
    Stack* prevStack;
    
    // Check if node is the head
    if( firstStack == deleteStack )
    {
        firstStack = firstStack->next;
        free( deleteStack );
        return;
    }
    
    // Find the node to delete
    while( currentStack != NULL && currentStack != deleteStack )
    {
        prevStack = currentStack;
    }
    
    // If node found, unlink it
    if( currentStack != NULL )
    {
        prevStack->next = currentStack->next;
    }
    
    free( deleteStack );
}

void printStacks()
{
    Stack*   stack = firstStack;
    
    
    while( stack!= NULL )
    {
        printf("%f\t", stack->value );
        stack = stack->next;
    }
}

int main()
{
    Stack         *pt;
    int   returnCount;
    float       value;
 
        printf("Inserting \n"); 
        pt = createStack(1.0);
        if ( pt )
            addStack( pt );
    
        pt = createStack(2.0);
        if ( pt )
            addStack( pt );
            
        pt = createStack(3.0);
        if ( pt )
            addStack( pt );
        
        printStacks();
        printf("\n");
        
        printf("The stack size is %d\n", globalCount);
        
     
        return 0;
}
