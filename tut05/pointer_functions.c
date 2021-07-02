// TUTORIAL 5
// Pointers in Functions Demo Code
// Written by F09C

// QUESTION 11 AND 12
#include <stdio.h> 

void sum_nums(int a, int b, int *sum);
int *max(int *a, int *b);

int main(void) {
    // testing q11 function
    int num1 = 2;
    int num2 = 3;
    int total = 0;
    sum_nums(num1, num2, &total);
    printf("%d\n", total);
    
    int *address = max(&num1, &num2);
    printf("%p\n", address);
    
    
}

// QUESTION 11
// Write a void function which places the sum of two numbers inside a 
// variable passed in by reference.

// It should have the following prototype:
/*
// WONT WORK
void sum_nums(int a, int b, int sum) {
    sum = a + b;

}
*/

void sum_nums(int a, int b, int *sum) {
    *sum = a + b;

}

// Do we even need pointers??



// QUESTION 12
// Write an int *function which returns the address of the greater of 
// two integers passed by reference.

// It should have the following prototype:
int *max(int *a, int *b) {
    if (*a > *b) {
    
    // returns a pointer/address
        return a; 

    }
    else {
        return b;
    }


}
