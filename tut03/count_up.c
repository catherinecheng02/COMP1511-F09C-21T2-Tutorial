// Tutorial Question 5 - 7
// Written by F09C

// QUESTION 5
// Program that reads an integer n and prints the integers 1..n one per line
/*
#include <stdio.h>
int main(void) {
    int end = 0;
    
    printf("Enter finish: ");
    scanf("%d", &end);
    int i = 1;
    
    while (i <= end) {
        printf("%d\n", i);
        i = i + 1;
 
    }
    return 0;

}

*/

// QUESTION 6
// How could we build on our code from count_up.c to use an increment of the 
// user's choosing?
/*
#include <stdio.h>
int main(void) {
    int end = 0;
    int increment = 0;
    printf("Enter finish: ");
    scanf("%d", &end);
    printf("Enter increment: ");
    scanf("%d", &increment);
    int i = 1;
    
    while (i <= end) {
        printf("%d\n", i);
        i = i + increment;
        // i += increment;
 
    }
    return 0;

}
*/

// QUESTION 7
// How could we change our code to only print out multiples of 7?
#include <stdio.h>
int main(void) {
    int end = 0;
    
    printf("Enter finish: ");
    scanf("%d", &end);
    int i = 0;
    // while (i <= end) {
    //    if (i % 7 == 0) {
        //  printf("%d\n", i);
        //  i = i + 1
        //}
    
    //
    while (i <= end/7) {
        printf("%d\n", 7*i);
        i = i + 1;
 
    }
    return 0;

}


