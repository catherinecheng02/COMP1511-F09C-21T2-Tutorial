// Tutorial 9
// Malloc and Free Review
// Question 3 and 4
// Written by Catherine Cheng 
#include <stdio.h>
#include <stdlib.h>



struct node {
    int data;
    struct node * next;
};

struct node *create_node(int input_data);

int main(void) {
    // QUESTION 3
    // What does malloc do?
    // - allocates memory on the heap and can be accessed after function ends
    // What library is it from?
    // <stdlib.h>
    // QUESTION 4
    // What are its outputs and inputs?

    // input - amount of memory
    // output - address of the memory 
    
    // Let's use malloc in a function that creates nodes
    struct node *new = create_node(7);
    printf("data = %d\n", new->data);
    
    
    // QUESTION 9
    // What is a memory leak? What does dcc --leak-check do?
    // - happens when we dont free memory allocated 
    
 
  
    // QUESTION 5 + 6
    // What does free do?
    // What is the input to free and how does it help it do what it needs to do?
    // - free the memory we allocated
    free(new);
    
    // QUESTION 7 + 8
    // What is a use after free error? Give an example.
    // - when you try to access freed memory
    printf("data = %d\n", new->data);
    
    // Why are these one of the worst causes of bugs in C programs?
    
    
}

struct node *create_node(int input_data) {
    // sizeof(int), sizeof(1)
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = input_data;
    new_node->next = NULL;
    return new_node;
}


