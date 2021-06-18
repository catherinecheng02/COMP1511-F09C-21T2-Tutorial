// QUESTION 9 
// Program that prints out a square of asterisks
// Written by F09C

/*
#include <stdio.h>

int main(void) {
    int row;
    int n;

    printf("Please enter an integer: ");
    scanf("%d", &n);

    row = 0;
    
    while (row < n) {
        // insert code that will print 
        // a row of asterisks that is n long
        int column = 0;
        while (column < n) {
            printf("*");
            column++;
        
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
*/
// QUESTION 10 
// How do we modify the program so that it prints out a triangle?
/*
#include <stdio.h>

int main(void) {
    int row;
    int n;

    printf("Please enter an integer: ");
    scanf("%d", &n);

    row = 0;
    
    while (row < n) {
        // insert code that will print 
        // a row of asterisks that is n long
        int column = 0;
        while (column < n) {
            if ( row + column >= n -1) {
                printf("*");
            } else {
                printf("-");
            }
            
            column++;
        
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
*/

// QUESTION 11
//  How do we modify the program so that it prints out:
//  -*-*-*-
//  -*-*-*-
//  -*-*-*-
//  -*-*-*-
//  -*-*-*-
//  -*-*-*-
//  -*-*-*-

#include <stdio.h>

int main(void) {
    int row;
    int n;

    printf("Please enter an integer: ");
    scanf("%d", &n);

    row = 0;
    
    while (row < n) {
        // insert code that will print 
        // a row of asterisks that is n long
        int column = 0;
        while (column < n) {
            if (column % 2 == 1) {
                printf("*");
            } else {
                printf("-");
            
            }
            
            column++;
        
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
} 
