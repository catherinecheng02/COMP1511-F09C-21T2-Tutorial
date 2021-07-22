// Tutorial 8
// Questions 2 - 4
// Intro to structs
// Written by Catherine Cheng (z5310517) and F09C 
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000

// QUESTION 2
// What is a struct?
// How does it differ from an array?


// Similarities - both of them are collections of variables
// differences - arrays store same data type, structs store different,
// array elements accessed via indexes, struct elements accessed by name


// QUESTION 3

// How could we represent a student and their assignment 1 mark as a struct?
// What fields might we want to include?

// How do we declare?
struct student{
    char name[MAX_LENGTH];
    int zid;
    double mark;
    // struct student *next; - pointer to next student struct in list (we need this when we make linked list)

}; // dont forget semicolon


// Where do we declare struct?
// - above the main function, after #include



// QUESTION 4

// Create a struct student with the name "Andrew Taylor", zid of 5151515, 
// assignment 1 mark of 60.2 in the main function (hint, you do not need functions 
// or malloc).


int main(void) {
    // no need to malloc because not struct pointer
    // use "." rather than ->
    struct student andrew;
    // if you want to use strcpy, please #include <string.h>
    strcpy(andrew.name, "Andrew Taylor"); // equivalent to array[0] = 5;
    andrew.zid = 55555555;
    andrew.mark = 60.2;
    
    
    
    
    // how to print?
    printf("%s\n", andrew.name);   // equivalent to printf("%d\n", array[0]);
    printf("%d\n", andrew.zid);

}
