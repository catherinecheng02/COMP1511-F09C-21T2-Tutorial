// Tutorial 4 Question 25 - 26
// QUESTION 25
// Discuss how we could create a loop that would continually read values in 
// from standard input until the user inputs anything other than a number 
// (or the input ends).

#include <stdio.h>
#define SIZE 1000
int main(void) {
    int input_arr[SIZE];
    int i = 0;
    while(scanf("%d", &input_arr[i]) == 1) && i < SIZE) {
        i++;
        
    }
    
    // while(scanf("%d", &input) != EOF) 
    
}

// QUESTION 26
// Edit the code written in the previous question so that the integers scanned 
// in are placed into an array called inputs of size 1000. You can assume no 
// more than 1000 numbers will be entered.
