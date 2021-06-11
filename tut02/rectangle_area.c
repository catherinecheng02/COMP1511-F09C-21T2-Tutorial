// Question 9 - scan in length and width and calculate area of a rectangle

#include <stdio.h>

int main(void) {
    int length;
    int width;
    int area;

    printf("Please enter rectangle length: ");
    scanf("%d", &length);
    printf("Please enter rectangle width: ");
    scanf("%d", &width);
    area = length * width;

    printf("Area = %d\n", area);

    return 0;
}
