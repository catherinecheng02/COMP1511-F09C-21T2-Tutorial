#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);
struct node *prepend(int data, struct node *head);

int main(void) {
    struct node *head = create_node(1);
    head = prepend(2, head);
    head = prepend(3, head);
    head = prepend(5, head);

    struct node *prev = NULL;
    struct node *curr = head;
    while (curr != NULL) {
        prev = curr;
        curr = curr->next;
        free(prev);
    }
    return 0;
}

struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Given a data value and head of a list, prepend a node containing the data value 
// to the list and return the new head.
struct node *prepend(int data, struct node *head) {
    struct node *new_head = create_node(data);
    new_head->next = head;
    return new_head;
}
