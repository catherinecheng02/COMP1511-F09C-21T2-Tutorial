// QUESTION 10
// Author: Dean Wunder (d.wunder@unsw.edu.au)
// Using a stack to match brackets

#include <stdio.h>
#include "stack.h"

int opening_bracket(int bracket);
int closing_bracket(int bracket);
int brackets_match(int opening, int closing);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "insert bracket string", argv[0]);
        return 1;
    }
    
    Stack my_stack = create_stack();
    char *brackets = argv[1];
    //loop through string
    int i = 0;
    while(brackets[i] != '\0') {
        // if opening bracket, push to stack 
        if (opening_bracket(brackets[i]) == 1) {
            stack_push(my_stack, brackets[i]);
        }
        
        
        // if closing bracket, pop off stack and compare
        if(closing_bracket(brackets[i]) == 1) {
        
            // if stack is empty and there's nothing to pop
             if (stack_size(my_stack) == 0) {
                free_stack(my_stack);
                return 0;
             }
        
            int bracket_from_stack = pop(my_stack);
            // compare
            if (brackets_match(bracket_from_stack, brackets[i]) == 0) {
                free_stack(my_stack);
                return 0;
            
            }
        
        }
        
        
        i++;
    }
    
    // check if stack is empty
    if (stack_size(my_stack) != 0) {
        free_stack(my_stack);
        return 0;
    }
    
    printf("valid sequence\n");
    free_stack(my_stack);
    
    return 0;
}

int opening_bracket(int bracket) {
    if (bracket == '(' || bracket == '{' || bracket == '[') {
        return 1;
    }
    return 0;
}

int closing_bracket(int bracket) {
    if (bracket == ')' || bracket == '}' || bracket == ']') {
        return 1;
    }
    return 0;
}

int brackets_match(int opening, int closing) {
    if (opening == '(' && closing == ')') {
        return 1;
    }
    if (opening == '{' && closing == '}') {
        return 1;
    }
    if (opening == '[' && closing == ']') {
        return 1;
    }
    return 0;
}
