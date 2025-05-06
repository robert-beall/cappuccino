#include <stdio.h>
#include "linked-list.h"

int main() {
    struct Node* head = initNode(0);
    printList(head);

    // test listSize for size of one
    printf("Size of list: %d\n", listSize(head));

    // test listSize for NULL case (0)
    printf("Size of next: %d\n", listSize(head->next));

    // Append a new node with data 2 at the end of the list
    append(head, 2);
    printList(head);

    // test listSize after appending
    printf("Size of list after append (should be 2): %d\n", listSize(head));

    // Print data at index 1 of the list
    printf("Get index 1 of the list (should be 2): %d\n", get(head, 1)->data);

    // insert a node between index 0 and index 1 of list
    struct Node* insertedNode = insert(head, 7);

    printf("Get index 1 of the list (should be 7): %d\n", get(head, 1)->data);

    printf("Get index 2 of the list (should be 2): %d\n", get(head, 2)->data);

    head->next = delete(head->next);

    printf("Get index 1 of the list after deletion (should be 2): %d\n", get(head, 1)->data);

    int i = 0;

    for (i; i < 10; i++) {
        append(head, i);
    }

    printList(head);

    deleteAll(head);
    head = NULL;
    printList(head);
    return 0;
}