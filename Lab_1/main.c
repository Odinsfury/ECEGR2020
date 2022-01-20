/* Program:C Function, Loops and Control
 * Author: Enrique Rodriguez */
 
#include<stdio.h>

void SizeOfVariables(void)
{
        /* Declare Variables these are local within this function */
        char c;
        short s;
        int i;
        unsigned int ui;unsigned long int ul;
        float f;
        double d;
        long double ld;
        void *ptr;
       
        printf("Size of Character: %zu bytes\n", sizeof(c));
        printf("\n\nSize of Short: %zu bytes\n", sizeof(s));
        printf("\n\nSize of Integer: %zu bytes\n", sizeof(i));
        printf("\n\nSize of Unsigned Int and Unsigned Long Int: %zu bytes and %zu bytes\n", sizeof(ui), sizeof(ul));
        printf("\n\nSize of Float: %zu bytes\n", sizeof(f));
        printf("\n\nSize of Double: %zu bytes\n", sizeof(d));
        printf("\n\nSize of Long Double: %zu bytes\n", sizeof(ld));
        printf("\n\nSize of void: %zu bytes\n", sizeof(*ptr));
        
}       
    
    

int main()
{
        /* Calling SizeOfVariables() from within main */
        SizeOfVariables();
        
        /*int num1, num2;
        float fraction;
        char character;
        char str[50];    //char array of size 50
        */
        
        // Taking integer as input from user
        
        /*
        printf("Enter two numbers\n");
        scanf(" %d%i", &num1,  &num2);
        printf("\n\nThe two numbers You have entered are %d and %i\n\n", num1, num2); 
        */
        
        //Taking float or fraction as input from the user
        /*
        printf("\n\nEnter a Decimal number\n");
        scanf(" %f", &fraction);
        printf("\n\nThe float or fraction that you have entered is %f", fraction);
        */
         
        //Taking Character as input from the user
        
        /*
        printf("\n\nEnter a Character\n");
        scanf(" %c" ,&character);
        printf("\n\nThe character that you have entered is %c and the ASCII number is %d", character, character);
        getchar();
        
        printf("\n\nEnter your complete name:\n\n\n");
        gets(str);
        printf("\n\nWelcome to ECEGR 2020 %s\n\n\n", str);
        printf("\n\n\t\tCoding is Fun !\n\n\n");
        */
    
        
        /*printf("Press Enter to quit");
        scanf("%c", &character);
        */
        return 0;
}

