// Written by F09C
// This is a program which takes in input and determines whether it is 
// odd, even or neither

#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    // if odd
    if (num % 2 != 0) {
        printf("%d is odd\n", num);
    
    } else if (num == 0){
        printf("%d is neither\n", num);
    
    } else {
    
        printf("%d is even\n", num);
    }

    return 0;
}
