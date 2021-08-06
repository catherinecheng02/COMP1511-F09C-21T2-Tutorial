// Tutorial 10

// Question 13 and 15

// QUESTION 13
// What is recursion?
// - function calling itself

// QUESTION 15
// Implement fibonacci recursively

#include <stdio.h>
int fibbonacci(int n);


int main(void) {
    // 0 1 1 2 3 5 8 13
    int result = fibbonacci(100); // should return 5
    printf("%d\n", result);

}

// how do we do this using recursion
int fibbonacci(int n) {
    // base case
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    printf(" functioned called\n");
    
    return fibbonacci(n-1) + fibbonacci (n-2);
    
}

