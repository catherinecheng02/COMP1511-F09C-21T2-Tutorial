// TUTORIAL 5
// QUESTION 6 + 7
// 2D Arrays Demo Code
// Written by F09C

// QUESTION 6
// The code square.c prints a 7×7 grid of 1's
// How would you change it so that it instead filled a 2D array with 1's and 
// printed it out? What are the benefits of storing the values of the grid in a
// 2D array?


// 2D arrays are better because you can access single elements - more flexibility
// easy to change values
#include <stdio.h>

#define SIZE 7
void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar);


int main(void) {
    int row, column;
    
    // fill the array
    int array[SIZE][SIZE];
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            
            array[row][column] = 1;
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    // call function
    scalar_multiply(SIZE, SIZE, array, 4);      
   
    
    // print out array

    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            printf("%d", array[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}

// QUESTION 7

// Write a function that takes in a 2D array of ints and multiplies every value 
// in the array by a given int.
// It will have this prototype:

void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar) {
    int i = 0;
    while (i < rows) {
        int j = 0;
        while(j < columns) {
            matrix[i][j] = matrix[i][j]*scalar;
            j++;
        }
  
    
        i++;
    }

}





