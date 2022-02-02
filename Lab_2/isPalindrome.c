#include <stdio.h>


// IsPalindrome Function
int IsPalindrome(long value) {
    int storeduservalue = value;           /* Initiallizing varliable storeuservalue to store (userinputvalue) from main */
    int reversed = 0;                      
    int remainder;
        
        
        while (value != 0){
            remainder = value % 10;
            reversed = reversed * 10 + remainder;
            value /= 10;
        }
        
        if (storeduservalue == reversed){                                    
            printf("\nYou entered %d: This is a palindrome.\n\n", storeduservalue); 
            return 1;
        
        }

        else{
            printf("\nYou entered %d: This is not a palindrome. \n\n", storeduservalue); 
            return 0;
        
        }
}


int main(){
    long userinputvalue;                                    /* Declaring userinputvalue variable */
        
        printf("Enter a value: ");                          /*Print request userinputvalue variable value*/
        scanf("%d", &userinputvalue);                       /*store value to userinputvalue variable*/
        
        int logictest = IsPalindrome(userinputvalue);       /*Call IsPalidrome Function /w declared value from variable userinputvalue */
        
        printf("\nThis function returns %d.\n\n", logictest);
        
        return 0;
}

