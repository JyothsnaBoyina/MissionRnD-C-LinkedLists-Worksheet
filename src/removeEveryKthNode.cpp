/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	int i = 0,count=1;
	struct node *temp,*prev;
	temp = head;
	prev = NULL;

	if (K<=1)
		return NULL;

	while (temp!= NULL)
	{
		
		if (count == K)
		{
			prev->next = temp->next;
			temp = prev->next;
			count = 1;
		}
		else
		{
			prev = temp;
			temp = temp->next;
			count++;
			
		}
		

	}
	return head;
}