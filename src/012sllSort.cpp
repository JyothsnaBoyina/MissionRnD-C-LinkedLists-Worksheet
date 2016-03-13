/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};


void sll_012_sort(struct node *head){

	int a[3] = { 0, 0, 0 },i;
	struct node *temp;
	temp = head;
	while (temp != NULL)
	{
		a[temp->data]++;
		temp = temp->next;
	}
	for (i = 0; i < 3; i++)
	{
		while (a[i]!= 0)
		{
			head->data = i;
			head = head->next;
			a[i]--;
		}
	}
	head = NULL;
}

	