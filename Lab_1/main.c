/* Program:C Function, Loops and Control
 * Author: Enrique Rodriguez */
 
#include<stdio.h>

/* Start Variable Modifier Size (bytes) Function
     
    
    void SizeOfVariables(void)
{
        /* Declare Variables these are local within this function */
        /*
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
End of Variable Modifier Size (bytes) Function */


/* Start of Is Leap Year Function
    
     
     int IsLeapYear(int aYear)
{
    /* No leap year before year 1752
     if (aYear < 1752)
        {
            printf("\nYou Entered %d: There are no leap years before 1752.\n", aYear);
        return 0;
        }
    
    /* If year is divisible by 400, then year is a leap year
     else if (aYear % 400 == 0)
        {
            printf("\nYou entered %d: This is a leap year.\n", aYear);
        return 1;
        }
        
    /* Not a leap year if divisible by 100
     else if (aYear % 100 == 0)
        {
            printf("\nYou entered %d: This is not a leap year.\n", aYear);
            return 0;
        }
        
    /* If year is divisible by 4, then year is a leap year
     else if (aYear % 4 == 0)
        {
            printf("\nYou entered %d: This is a leap year.\n", aYear);
            return 1;
        }
        
    /* All other years are not leap years
     else 
        {
            printf("\nYou entered %d: This is not a leap year.\n", aYear);
            return 0;
        }
}
End of Is Leap Year Function */    


/* Start of Is Vowel Function BRUTE FORCE METHOD */


    int IsVowel(char aLetter) {
        if (aLetter == 'a' ||aLetter == 'e'||aLetter == 'i'||aLetter == 'o'||aLetter == 'u'||aLetter == 'A'||aLetter == 'E'||aLetter == 'I'
            ||aLetter == 'O'||aLetter == 'U'){
            printf("\nYou entered %c: This is a vowel!\n", aLetter); 
            return 1;
    }
        else if (aLetter == 'b' ||aLetter == 'c'||aLetter == 'd'||aLetter == 'f'||aLetter == 'g'||aLetter == 'h'||aLetter == 'j'
            ||aLetter == 'k'||aLetter == 'l'||aLetter == 'm'||aLetter == 'n'||aLetter == 'p'||aLetter == 'q'||aLetter == 'r'||aLetter == 's'
            ||aLetter == 't'||aLetter == 'v'||aLetter == 'w'||aLetter == 'x'||aLetter == 'y'||aLetter == 'z'||aLetter == 'B' ||aLetter == 'C'
            ||aLetter == 'D'||aLetter == 'F'||aLetter == 'G'||aLetter == 'H'||aLetter == 'J'
            ||aLetter == 'K'||aLetter == 'L'||aLetter == 'M'||aLetter == 'N'||aLetter == 'P'||aLetter == 'Q'||aLetter == 'R'||aLetter == 'S'
            ||aLetter == 'T'||aLetter == 'V'||aLetter == 'W'||aLetter == 'X'||aLetter == 'Y'||aLetter == 'Z'){
            printf("\nYou entered %c: This is a consonant!\n", aLetter);
            return 0;
    }
        else{
            printf("\nError!! allyourbasearebelongtous ", aLetter);
            return 0;
        }
}

int main()
{
 
/* Start of User Input and Output (scanf)and ASCII 
       

        int num1, num2;
        float fraction;
        char character;
        char str[50];   /* char string size of 50 
        
        /* Taking integer as input from user
        printf("Enter two numbers\n");
        scanf(" %d%i", &num1,  &num2);
        printf("\n\nThe two numbers You have entered are %d and %i\n\n", num1, num2); 
        
        
        //Taking float or fraction as input from the user
        /*
        printf("\n\nEnter a Decimal number\n");
        scanf(" %f", &fraction);
        printf("\n\nThe float or fraction that you have entered is %f", fraction);
        
         
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
        
    
        
        /*printf("Press Enter to quit");
        scanf("%c", &character); 
End of User Input and Output (scanf) and ASCII main        */
    

/* Start of Variable Modifier Size (bytes) main
        
        
    /* Calling SizeOfVariables() from within main 
        SizeOfVariables();
End of Variable Modifier Size (bytes) main */ 

 
/* Start of Is Leap Year main        
        
    
        int aNumber;

        printf("Enter a year:");
        scanf("%d", &aNumber);
        
        int myvalue = IsLeapYear(aNumber);
        
        printf("This function returns %d.\n", myvalue);
End of Is Leap Year main */  


/* Start of Is Vowel main */
    
        char userinputletter;
        
        printf("Enter an alphabet letter:");
        scanf("%c", &userinputletter);

        int logictest = IsVowel(userinputletter);
        
        

        printf("\nThis function returns %d.\n\n", logictest);
        
        return 0;
}

