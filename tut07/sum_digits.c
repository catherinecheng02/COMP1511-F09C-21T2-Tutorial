
// Week 7 Tutorial
// Question 7 - if time allows
// Program which reads characters from input and prints a count of the number
// of digits, as well as their sum
// Written by F09C

#include <stdio.h>

int main(void) {

// QUESTION 7
// Write a program sum_digits.c which reads characters from its input. 
// When the end of input is reached it should print a count of the number of digits
// in its input and their sum.

// The only functions you can use are getchar() and printf().
    int digit_count = 0;
    int digit_sum = 0;
    int input = getchar();
    while(input != EOF) {
        
        // count number of digits
        if (input >= '0' && input <= '9'){
            digit_count++;
            // calculate sum
            digit_sum = digit_sum + input - '0';
        }
        
        
        

        input = getchar();
        
    }
    printf("digit count = %d, sum = %d\n", digit_count, digit_sum);

}
