#include <stdio.h>
#include <string.h>
// malloc and free
#include <stdlib.h>
#define MAX_LENGTH 50

struct student {
    char name[MAX_LENGTH];
    int mark;
};

struct student *create_student();

int main(void) {
    struct student *student_p = create_student();
    printf("Name: %s, Mark: %d\n", student_p->name, student_p->mark);
    free(student_p);
    return 0;
}

struct student *create_student() {
    struct student *new_student_p = malloc(sizeof(struct student));
    strcpy(new_student_p->name, "Tom Kunc");
    new_student_p->mark = 71;
    return new_student_p;
}
