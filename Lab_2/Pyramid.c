#include <stdio.h>


void Pyramid(int lines){
    int rows = lines;
    int i;
    int space;
    int k = 0;
    
    for (i = 1; i <= rows; ++i, k= 0){
        for (space = 1; space <= rows - i; ++space){
            printf("  ");
        }
        while (k != 2 * i - 1) {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
 
}   

int main(){
    int userinputline;
    
        printf("Enter the number of desired lines: ");
        scanf("%d", &userinputline);
        
        Pyramid(userinputline);
    
}