// Week 7 Tutorial
// Question 2,3,6
// Char introduction
// Getchar and putchar


#include <stdio.h>

int main(void) {
    // QUESTION 2
    // So far in this course we have learnt about two data types - int and double.
    // What about a char variable? What is the size of this variable, and what 
    // possible values can it have? What do these values mean?
    
    // Declaration of a char
    char my_char;
  
    // Initialise a char
    // my_char = a; - DONT DO THIS
    my_char = 'a';
    // another way, my_char = 97;
    

    
    // Why do we need the quotes?
    // - shorthand for "give me the ascii value"
    
    
    // Print out char
    printf("%c\n", my_char);
    
   
    // What if we use %d? - prints ascii values
    printf("%d\n", my_char);
   
    // What if we want to print the next letter?
    printf("%c\n", my_char + 1);
    
    // Convert 'a' into 'A'
    printf("%c\n", my_char - ('a' - 'A'));
    
    // How do we check that a letter is lowercase?
    if(my_char >= 'a' && my_char <= 'z'){
        printf("lowercase\n");
    
    }
    
    
    
    
    
    
    // QUESTION 3
    // When we want to store a char, is it better to store it using the letter 
    // itself, or use the ASCII value for that letter? e.g.
    // char ch = 'a';
    // or
    // char ch = 97;
    
    // better to store using the letter, for readability and style 
    
    
    
    // QUESTION 6
    // So far in this course we have only used scanf and printf to scan input and 
    // print output in our programs.
    // How do we use getchar and putchar? 
    char input = getchar();
    putchar(input);
    // putchar('\n');
 
    
    // How does getchar signal to us that it 
    // has reached the end of the input? (check man page)
    // - EOF - negative number - we can't store this in char variable

    // Why does getchar return an int instead of a char?
    int input = getchar();
    putchar(input);
    
    
    
    // How do we scan until end of input?
    int input = getchar();
    while(input != EOF) {
        putchar(input);
        input = getchar();
        
    }
    
    
    
    // Why is getchar/putchar useful?
    // good for working with one character at a time 
    
    return 0;

   
}
