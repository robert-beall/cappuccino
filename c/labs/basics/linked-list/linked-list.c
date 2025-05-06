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
 * Insert a new element between the provided node and its next element. 
 * 
 * @param node node to insert after
 * @param i value of inserted node
 * @return the inserted node or NULL if the input node is NULL (operation failed)
 */
struct Node* insert(struct Node* node, int i) {
	if (node == NULL) {
		return NULL;
	}

	struct Node* next = node->next;
	struct Node* inserted = initNode(i);
	node->next = inserted;
	inserted->next = next;
	return inserted;
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

	while (iter != NULL) {
		if (count == index) {
			return iter;
		}

		iter = iter->next;
		count++;
	}

	return NULL;
}

/**
 * Delete the passed node and return the next node or NULL if no next node exists. 
 * 
 * @param node to delete
 * @return the next node or NULL if none exists
 */
struct Node* delete(struct Node* node) {
	struct Node* next = node->next;

	free(node);

	return next;
}

/**
 * Moving front to back, delete the node and all subsequent nodes. 
 * 
 * @param head first node of the list
 */
void deleteAll(struct Node* head) {
	struct Node* iter = head;

	while (iter != NULL) {
		struct Node* temp = iter->next;
		free(iter);
		iter = temp;
	}

	head = NULL;
}

/**
 * Return the size of the provided list. 
 * 
 * @param head first node of the list
 * @return size of list (int)
 */
int listSize(struct Node* head) {
	int count = 0; 

	struct Node* iter = head;

	while (iter != NULL) {
		count++;
		iter = iter->next;
	}

	return count;
}

/**
 * Print the list given the head node. 
 * 
 * @param head of list
 */
void printList(struct Node* head) {
	if (head == NULL) {
		printf("NULL\n");
		return;
	}

	struct Node* iter = head;

    while (iter != NULL) {
        printf("%d -> ", iter->data);
        iter = iter->next;
    }

	printf("NULL\n");
}