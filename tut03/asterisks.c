// QUESTION 8
// Program that reads in an integer and prints out that many asterisks, 
// each on a new line.
#include <stdio.h>

int main(void) {
    int row;
    int n;

    printf("Please enter an integer: ");
    scanf("%d", &n);

    row = 0;
    while (row < n) {
        printf("*\n");
        row = row + 1;
    }

    return 0;
}
