// Week 7 Tutorial
// Question 4 and 5
// String introduction
#include <stdio.h> 
int secret_function(char *word)


int main(void) {
    // QUESTION 4
    // What is a string?
    
        
    // How do we initialise strings?
    char str[] = "string";
    // automatically add on a '\0'
    
    
    // Another way?
    char str2[] = {'w', 'o', 'r', 'd', '\0'};

    // How do we print out string?
    printf("%s\n", str);


}

// QUESTION 5
// What does the following function do?
// - returns no. of lowercase letters
// Can you explain the stopping case in the while loop? Why does it work and 
// what is the significance of the '\0'?
// - we stop once our word is finished

// What does the char *word input mean? What's the relationship between an array 
// and a pointer?
// char *word - pointer to a char 

int secret_function(char *word) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}
