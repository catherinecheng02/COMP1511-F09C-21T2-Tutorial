// Tutorial 4 Questions 16-23
#include <stdio.h>
#define SIZE 5



int main(void) {

    // QUESTION 16
    // Create an array called zeroes of a size 7 and initialise
    // all of the elements to 0
    
    int zeroes[7] = {0};
    //int zeroes[7] = {0,0,0,0,0,0,0};









    // QUESTION 17 
    // How do we print out all these elements to ensure they are all 0?

    // first way 
    printf("zeroes[0] is : %d\n", zeroes[0]);
    printf("zeroes[1] is : %d\n", zeroes[1]);
    printf("zeroes[2] is : %d\n", zeroes[2]);
    printf("zeroes[3] is : %d\n", zeroes[3]);
    printf("zeroes[4] is : %d\n", zeroes[4]);
    printf("zeroes[5] is : %d\n", zeroes[5]);
    printf("zeroes[6] is : %d\n", zeroes[6]);

    // better way?
    int i = 0;
    while (i < 7) {
        printf("Index %d: %d\n", i, zeroes[i]);
        i++;
    }

    // QUESTION 18 
    // How would we do the same thing but this time have the elements 
    // initialised to 1?
    int numbers[7] = {1,1,1,1,1,1,1};
   
    // another way?
    i = 0;
    while (i < 7) {
        numbers[i] = 1;
        i++;
    }

    // QUESTION 19
    // Write a program first_plus_third.c that creates an array where all elements 
    // are 1 then prints out the sum of the first and third element.
    int sum = numbers[0] + numbers[2];
    printf("sum: %d\n", sum); 
    

    // QUESTION 20
    // If an array is declared as int numbers[20]; and your program assigns a 
    // value to each element in the array, what is the problem with the 
    // statement x = numbers[20];?
    int array[20];
    int x = array[20];
    printf("%d\n", x);
    


    // QUESTION 21 
    // Write a function array_print(int length, int arr[]) that prints all 
    // the contents in an array, separated by new lines. Why do we need a length parameter?
    void array_print(int length, int arr[]){ 
        int i = 0;
        while (i < length) {
            printf("Index %d: %d\n", i, arr[i]);
            i++;
        }
    
    }
   

    // QUESTION 22
    // See change_element.c 



    // QUESTION 23
    // Write a C code function to store, in each element of this array, 
    // the square of the index of that element, e.g., squares[5] would contain the value 25.
    void square_indexes(int squares[], int length) {
        int i = 0;
        while (i < length) {
            squares[i] = i*i;
            i++;
        }
    }
    
}
