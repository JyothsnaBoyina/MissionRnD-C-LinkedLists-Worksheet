/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node* temp ,*temp1;
	int  small, t;
	temp = head;
	temp1 = head;
	
	while (temp1 != NULL)
	{
		small = temp1->num;
		while (temp != NULL)
		{
			if (temp->num < small)
			{
				t = temp1->num;
				temp1->num = temp->num;
				temp->num = t;
				small = temp1->num;
			}
			temp = temp->next;
		}
		temp1 = temp1->next;
		temp = temp1;
	}

	return head;
}
	