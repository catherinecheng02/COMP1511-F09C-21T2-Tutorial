// Week 7 Tutorial
// Question 8 and 9
// Fgets


#include <stdio.h>

int main(void) {
    // QUESTION 8
    // How do we use fgets? What are the inputs given to fgets? 
    // 3 inputs:
    // - array 
    // - size of array 
    // - stream - "stdin"
    
    char array[4096];
    //fgets(array, 4096, stdin);
    // printf("%s\n", array);
    
    
   
    // How does fgets signal to us that it has reached the end of the input?
    // NULL
    
    // How do we use fgets in while loop?
    while(fgets(array, 4096, stdin) != NULL) {
        printf("%s\n", array);
        printf("%s\n", array);
    
    }
    

    // When fgets scans in a line of text, will it include a '\n' at the end of the line? 
    // Is this always the case?


    
   
    


    // QUESTION 9
    // Write a program echo_twice.c which reads lines from its input and prints them twice.

    // The only functions you can use are fgets and printf. You can assume lines contain 
    // at most 4096 characters.
    
    
    
    
}
