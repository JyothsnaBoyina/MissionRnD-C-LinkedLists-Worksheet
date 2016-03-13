/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};


int pow(int, int);

int convert_sll_2digit_to_int(struct node *head){

	int l=0,i=0,d1,d2,n,result=0,a;
	struct node *temp;
	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		l++;
	}
	temp = head;
	while (i <l)
	{
		d1 = temp->digit1;
		d2 = temp->digit2;
		n = d1 * 10 + d2;
		a=pow(1, l - (2 * i));
		result = result + (n*a);
		temp = temp->next;
		i++;
	}

	return result;
}

int pow(int a, int b)
{
	int i;
	for (i = 0; i <= b; i++)
		a = a * 10;
	return a;
}