// Week 7 Tutorial
// Question 11 and 12
// Command line arguments 


#include <stdio.h> 
// we have to change void now:

int main(int argc, char *argv[]) {
    // QUESTION 11
    // Another way your program can receive input is through command line arguments. 
    // How are command line arguments given to a program?

    // What are argc and argv?
    
    // argc - int, number of elements in argv, number of arguments typed in
    // *argv[] - kind of like 2d array, array of strings
    
    
    // QUESTION 12
    // If the following command were run, what would argc and argv contain?

    // ./program these are command line arguments
    
    // Let's try printing this out
    // print argc:
    printf("%d\n", argc);
    
    
    // print argv
    int i = 0;
    while (i < argc) {
        printf("%s\n", argv[i]);
        i++;
    
    
    }
    
    
    
    
    // what if we don't want to print the program name?
    // change i = 1;

}
