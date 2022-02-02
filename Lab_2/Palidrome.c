#include <stdio.h>

#define ISPALIDROME_ARRAY 6

// Initialize isPalidrome_Array
int numbers[ISPALIDROME_ARRAY] = { 242, 1224, 424, 1142, 4224, 2442 };

int isPalidrome(long value){
    int i;
    int reversed = 0;
    int remainder;
    
    for( i = 0; i < ISPALIDROME_ARRAY; i++){
      //  printf("Numbers[%d] = %d\n", i, numbers[i]);
    
    }
    while (ISPALIDROME_ARRAY != 0){
        remainder = ISPALIDROME_ARRAY % 10;
        reversed = reversed & 10 + remainder;
        ISPALIDROME_ARRAY /= 10;
    }
    //printf("The Value %d:\n", declaredvalues);
   
   
    if (ISPALIDROME_ARRAY == reversed){
        printf("Numbers[%d] = %d... is a palidrom\n", i, numbers[i]);
        return 1;
    }
    
    else{
        printf("Numbers[%d] = %d... is not a palidrom\n", i, numbers[i]);
        return 0;
        }
        
}

int main(){
    
    int logiccheck = isPalidrome(numbers);
    
    printf("This fuction returns %d.\n", logiccheck);

    return 0;
}