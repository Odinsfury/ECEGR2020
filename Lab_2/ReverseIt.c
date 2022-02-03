#include <stdio.h>
#include <string.h>

void ReverseIt(void){
    float userinputvalues[5];
    int i;
    
        for(i = 0; i < 5; i++){
            printf("Enter five floating point values: ");
            scanf("%f" , &userinputvalues[i]);
        }
        
        for (i = 0; i < 5; i++){
        printf("%f\n", userinputvalues[5-1-i]);
        
        }
        
        scanf("NOTHING");
        return 0;
}
          
void main(){
    
        ReverseIt();
    
    return 0;
}

