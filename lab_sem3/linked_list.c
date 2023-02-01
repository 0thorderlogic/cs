#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node * next;
};

void traversal(struct node * head) {
	struct node * ptr = head;

	while (ptr != NULL)
	{
		printf("Data -> %d\n", ptr->data);
		ptr = ptr->next;
	}
	
}


int main() {
/* 
	TODO: 
		Declare nodes
		allocate memory!
		Enter data (optional)
		Connect nodes
 */

	// Declare nodes

	struct node * head;
	struct node * first;
	struct node * second;
	struct node * third;
	struct node * fourth;
	struct node * fifth;

	// allocate memory

	head = (struct node *)malloc(sizeof(struct node));
	first = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	fourth = (struct node *)malloc(sizeof(struct node));
	fifth = (struct node *)malloc(sizeof(struct node));

	// Entering data
	first->data = 11;
	second->data = 22;
	third->data = 33;
	fourth->data = 44;
	fifth->data = 55;

	// Connecting nodes
	head->next = first;
	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;
	fifth->next = NULL;

	// insert_middle(head, second);

	// Printing shit
	traversal(head);

	return 0;
}