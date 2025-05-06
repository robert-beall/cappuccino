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
 * Insert a new element between the provided node and its next element. 
 * 
 * @param node node to insert after
 * @param i value of inserted node
 * @return the inserted node or NULL if the input node is NULL (operation failed
 */
struct Node* insert(struct Node* node, int i);

/**
 * Get the value at a specified index in the passed linked list. 
 * 
 * @param head first node of linked list
 * @param index position in list
 * @return int value
 */
struct Node* get(struct Node* head, int index);

/**
 * Delete the passed node and return the next node or NULL if no next node exists. 
 * 
 * @param node to delete
 * @return the next node or NULL if none exists
 */
struct Node* delete(struct Node* node);

/**
 * Moving front to back, delete the node and all subsequent nodes. 
 * 
 * @param head first node of the list
 */
void deleteAll(struct Node* head);

/**
 * Return the size of the provided list. 
 * 
 * @param head first node of the list
 * @return size of list (int)
 */
int listSize(struct Node* head);

/**
 * Print the list given the head node. 
 * 
 * @param head of list
 */
void printList(struct Node* head);

#endif
