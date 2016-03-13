/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;

};
void push(struct node**, int);
//void reverse(struct node**);

struct node * numberToLinkedList(int N) {
	
	struct node* head = NULL;

	if (N < 0)
		N = N - (2*N);
	if (N == 0)
	{
		push(&head, 0);
		return head;
	}

	while (N != 0)
	{
		
		push(&head, N % 10);
		 N = N / 10;
	}
	//reverse(&head);
	return head;
}

void push(struct node** head, int dig)
{
	
	struct node* new_node =(struct node*) malloc(sizeof(struct node));

	new_node->num = dig;

	new_node->next =(*head);

	(*head) = new_node;
}

void reverse(struct node** head)
{
	struct node* prev = NULL;
	struct node* current = *head;
	struct node* next;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}