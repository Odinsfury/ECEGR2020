#include <stdio.h>

int HighestBidSet(int value){
    unsigned int storeduservalue = value;
    unsigned int valuetobinary = value;
    int a[10];
    int i;
    int count =  0;
    int store = -1;
    
        
        while(value != 0){
            if(value & 1 == 1)
                store = count;
                value = value >> 1;
                count++;
        
        }
        
        if(store ==-1){
            printf("No bit is set\n");
            return 0;
        }
        
        for (i = 0; valuetobinary > 0; i++){
            a[i] = valuetobinary % 2;
            valuetobinary = valuetobinary/2;
        }
        
        for(i = i-1; i >= 0; i--){
            printf("%d", a[i]);
        } 
         printf("\nValue = %d Binary = %d Highest bit set = %d\n", storeduservalue, a[i], store);
         
    return 0;
}

int main(){
    int userinputvalue;
    
        printf("Enter a value: ");
        scanf("%d", &userinputvalue);
        
        HighestBidSet(userinputvalue);
    
    return 0;
}