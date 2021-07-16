// Week 7 Tutorial
// Question 13 and 14
// Testing

// QUESTION 13
// Why is testing important? How can we test our code?
// we don't wanna break everything
// cover all possible cases
// check code is doing what it's meant to 

// autotests, write our own tests, ask user to try running code


// QUESTION 14

// The following code shows an add function that adds three numbers together.
//  It also includes a test for the add function.

// What should the test_add function do?
// Complete the test_add function -- what does it output when you run the program?
// Why would only testing for add(1,2,3); be a bad idea?

// Written very badly by Tom Kunc 2020-10-25 (z5205060)
// t.kunc@unsw.edu.au (please don't email me about this bad code)

#include <stdio.h>

#define MEETS_SPEC 1
#define DOES_NOT_MEET_SPEC 0

int add(int a, int b, int c);

int test_add(void) {
    
    if(add(1,2,3) == 6 && add(2,3,4) == 9) {
        return MEETS_SPEC;
    }
    
    else {
        return DOES_NOT_MEET_SPEC;
    }
}


// This function returns the sum of a, b and c.
int add(int a, int b, int c) {
    return a + b + c;
}

int main(void) {
    printf("Test whether `add` does the right thing: ");
    if (test_add() == MEETS_SPEC) {
        printf("MEETS SPEC\n");
    } else {
        printf("DOES NOT MEET SPEC\n");
    }
    return 0;
}
