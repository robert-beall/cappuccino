#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node {
	int data;
	struct Node* next;
};

/**
 * Initialize a new linked list node.
 * 
 * **NOTE:** This is basically a constructor.
 * 
 * @param i integer data value
 * @return pointer to Node struct
 */
struct Node* initNode(int i);

/**
 * Add a new element to the end of the list.
 * 
 * @param i integer data value
 */
void append(struct Node* head, int i);

/**
 * Get the value at a specified index in the passed linked list. 
 * 
 * @param head first node of linked list
 * @param index position in list
 * @return int value
 */
struct Node* get(struct Node* head, int index);

#endif
