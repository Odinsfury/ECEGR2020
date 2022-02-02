#define TOTAL_NUMBERS 6

// Initializing an array
int numbers[TOTAL_NUMBERS] = { 242, 1224, 424, 1142, 4224, 2442 };

// Function declaration

// int isPalidrome(long value);


// Accessing array elements
int main(){
    int i;
    
    for( i = 0; i < TOTAL_NUMBERS; i++){
        printf("Numbers[%d] = %d\n", i, numbers[i]);
    
    }
    return 0;
}