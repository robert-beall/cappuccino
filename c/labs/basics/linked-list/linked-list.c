#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"


/**
 * Initialize a new linked list node.
 * 
 * **NOTE:** This is basically a constructor.
 * 
 * @param i integer data value
 * @return pointer to Node struct
 */
struct Node* initNode(int i) {
	struct Node *n = (struct Node*) malloc(sizeof(struct Node));
    n->data = i;
	n->next = NULL;

	return n;
}

/**
 * Add a new element to the end of the list.
 * 
 * @param i integer data value
 */
void append(struct Node* head, int i) {
	struct Node *iter = head;

	while (iter->next != NULL) {
		iter = iter->next;
	}

	iter->next = initNode(i);
}

/**
 * Get the value at a specified index in the passed linked list. 
 * 
 * @param head first node of linked list
 * @param index (starting at zero) position in list
 * @return int value or NULL if out of bounds
 */
struct Node* get(struct Node* head, int index) {
	struct Node *iter = head;
	int count = 0;

	while (iter->next != NULL) {
		if (count == index) {
			return iter;
		}

		iter = iter->next;
	}

	return NULL;
}


