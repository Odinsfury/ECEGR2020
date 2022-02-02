#include <stdio.h>


// Factorial Function
long Factorial(long num) {
    int storeduservalue = num;    
    int i;
    unsigned long long fact = 1;
        
    if (num < 0){                                     /*Error for negative numbers*/
        printf("\nYou entered %d: ERROR!: Factorial is defined only for non-negative numbers.\n\n", storeduservalue); 
        return 0;
    }

    else{
        for (i = 1; i <= num; ++i){
            fact*= i;
    }
        printf("\nYou entered %d: The Factorial is %llu .\n\n", storeduservalue, fact); 
        return 1;
    }
}


int main(){
    long userinputnumber;               /*Declare user input variable*/
        
        printf("Enter a number: ");      /*Request user input (number)*/
        scanf("%d", &userinputnumber);  /*User input (numer)*/
        
        Factorial(userinputnumber);     /*Call Factorial Function*/
        
        return 0;
}
