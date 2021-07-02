int main(void) {
    // VARIABLES RECAP
    // Declaration of a variable
    int a;
    
    
    // Initialisation of a variable
    a = 5;
   
   
    // Every variable is stored at an address - we can print this out
    printf("%p\n", &a);
    
    // What is the "&"
    // & stands for "address of"
    
  
    // QUESTION 8
    // What is a pointer?
    // It's a type of variable - stores the memory address of another variable
    // Aimed at a particular variable type
    
    // How do you declare a pointer?
    int *pointer;
  
    // How do you initialise a pointer? - DONT USE *
    pointer = &a;
    
    // null pointer - when we dont want pointer pointing at anything
    // int *pointer = NULL;
    
    // When do we use "*"?
    // - * for multiplication
    // - declaring pointers int *name;
    // - dereference pointer 
    
    
    // Dereferencing pointers - what is it?
    // accessing value that pointer is pointing to 
    *pointer = 4;
    
    
    // How do we print the value that a pointer is pointing at?
    printf("%d\n", *pointer);
    printf("%d\n", a);
    
    // How do we print the memory address?
    printf("%p\n", &a);
    printf("%p\n", pointer);
 


    // QUESTION 9
    // Why did we have to always include the & symbol in our arguments given to scanf?
    
    int b;
    scanf("%d", &b);
    // & is address of
    // passing by reference 
    
    
    
    
    

}
