// Tutorial 9
// QUESTION 12 - 17
// Program to do various linked list exercises
// Written by F09C

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

#define NOT_IDENTICAL 0
#define IDENTICAL 1

int main(void) {
    
    // TESTING ADD_LAST 
    printf("==== Testing add_last ====\n");
    struct node *head = NULL;
    head = add_last(head, 1);
    print_list(head);

    head = add_last(head, 2);
    print_list(head);

    head = add_last(head, 3);
    print_list(head);

    head = add_last(head, 4);
    print_list(head);

    free_list(head);
    
    // TESTING DELETE_LAST
    printf("==== Testing delete_last ====\n");
    int vals[] = {6, 7, 8, 9, 10};
    struct node *test = create_list(vals, 5);

    test = delete_last(test);
    print_list(test);

    test = delete_last(test);
    print_list(test);

    test = delete_last(test);
    print_list(test);

    test = delete_last(test);
    print_list(test);

    test = delete_last(test);
    print_list(test);

    test = delete_last(test);
    print_list(test);

    test = delete_last(test);
    print_list(test);

    // TESTING IDENTICAL
    printf("==== Testing Identical ===\n");

    int vals1[] = {1, 2, 3, 4, 5};
    int vals2[] = {1, 2, 3, 4, 5};
    int vals3[] = {1, 2, 3};
    int vals4[] = {5, 4, 3, 2, 1};

    struct node *test1 = create_list(vals1, 5);
    struct node *test2 = create_list(vals2, 5);
    struct node *test3 = create_list(vals3, 3);
    struct node *test4 = create_list(vals4, 5);

    printf("-- Test 1: Empty list --\n");
    assert(identical(NULL, NULL) == 1); // two empty lists are identical
    assert(identical(test1, NULL) == 0);    // check NULL works in either argument
    assert(identical(NULL, test1) == 0);


    printf("-- Test 2: Identical lists --\n");
    assert(identical(test1, test2) == 1);
    assert(identical(test2, test1) == 1);
    assert(identical(test3, test3) == 1);   // list is identical to itself

    printf("-- Test 3: Subset of list --\n");
    assert(identical(test3, test2) == 0);   // subset is not identical
    assert(identical(test1, test3) == 0);

    printf("-- Test 1: Same values diff order --\n");
    assert(identical(test1, test4) == 0);
    assert(identical(test4, test1) == 0);

    free_list(test1);
    free_list(test2);
    free_list(test3);
    free_list(test4);

    printf("All tests passed! You are awesome!\n");
   

}






/** PRESCRIBED FUNCTIONS **/
// QUESTION 12
struct node *add_last(struct node *head, int data) {
   
    
    // create node - malloc
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    
    
    // Case 0: list is empty
    if (head == NULL) {
        return new_node;
    }
    
    // Case 1: one node
    // same as case 2
    
    
    // Case 2: many nodes
    // pointer to head to iterate through the list
    struct node *curr = head;
    
    // while loop 
    while (curr->next != NULL) {
    
        curr = curr->next;
    }
    // after the while loop, curr should point to last node
    
    // add new node
    curr->next = new_node;
  
    return head;
}
// QUESTION 13
struct node *delete_last(struct node *head) {
    // no need to malloc because we're not making new node
    
    
    // Case 0: list is empty
    if (head == NULL) {
        return NULL;
    }
    
    // Case 1: one node 
    if (head->next == NULL) {
        // free the node to delete
        free(head);
        return NULL;
    }
    
    // Case 2: many nodes
    struct node *prev = NULL;
    struct node *curr = head;
    
    // while loop 
    while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }
    // prev->next = curr->next; // alternative to line 170
    free(curr);
    
    prev->next = NULL;
    
    
    return head;
}

// QUESTION 14
struct node *copy(struct node *list) {
    return NULL;
}
// QUESTION 15
struct node *list_append(struct node *first_list, struct node *second_list) {
    return NULL;
}

// QUESTION 16
int identical(struct node *first_list, struct node *second_list) {
    // no need to malloc cos not making new node 
    
    struct node *curr1 = first_list;
    struct node *curr2 = second_list;
    // check we are not at the end of either list
    while(curr1 != NULL && curr2 != NULL) {
        // if data values at position dont match, we return early
        if (curr1->data != curr2->data) {
            return NOT_IDENTICAL;
        }
        
        // iterate at the same time
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    
    // check that lists are same length
    if (curr1 != NULL || curr2 != NULL) {
        return NOT_IDENTICAL;
    }
    
    
    
    return IDENTICAL;
}

// QUESTION 17
struct node *set_intersection(struct node *first_list, struct node *second_list) {
    return NULL;
}

// EXTRA QUESTION
// How to free a list?
void free_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        struct node *node_to_free = curr;
        curr = curr->next;
        free(node_to_free);
    
    }


}



// HELPER FUNCTIONS FOR TESTS
// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
struct node *create_list(int values[], int size) {
    int i = 0;

    if (size <= 0) {
        // empty linked list (or invalid size)
        return NULL;
    }

    struct node *head = NULL;   // head of the linked list
    struct node *tmp = NULL;    // temporary item we're working with
    struct node *curr = NULL;   // current node we're looking at in the linked list

    while (i < size) {
        tmp = create_node(values[i]);

        // link this node onto our list
        if (head == NULL) {
            // this is the first node in the list
            head = tmp;
            curr = head;
        } else {
            // this is not the first node in the list
            // add it to the end, i.e. after curr
            curr->next = tmp;

            // reset curr to point at the new last node
            curr = tmp;
        }
        i = i + 1;
    }

    return head;
}

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int dat) {
    struct node *new = malloc(sizeof(struct node));
    assert(new != NULL);
    new->data = dat;
    new->next = NULL;

    return new;
}

// prints out the list given the head of a list
void print_list(struct node *head) {
    struct node *curr;
    curr = head;

    while (curr != NULL) {
        printf("[ %d ]-->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

}

// frees all the elements in a linked list
void free_list(struct node *head) {
    if (head == NULL) {
        return;
    }
    free_list(head->next);
    free(head);
}

// return the number of items in the linked list
int num_items(struct node *head) {
    struct node *curr = head;
    int count = 0;

    while (curr != NULL) {
        count = count + 1;
        curr = curr->next;
    }

    return count;
}



