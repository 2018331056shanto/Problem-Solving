#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* link;
};

struct node* head;

void print () {
	struct node* temp = head;

	while (temp != NULL) {
		printf ("%d ", temp -> data);
		temp = temp -> link;
	}
}


void Insert (int value) {
	struct node* temp1 = (struct node*) malloc (sizeof (struct node));

	temp1 -> data = value;

	if (head == NULL || value <= head -> data) {
		temp1 -> link = head;
		head = temp1;
	}
	
	else {
		struct node* pred;
		struct node* p;

		p = head;

		while (p != NULL && p -> data > value) {
			pred = p;
			p = p -> link;
		}

		pred -> link = temp1;
		temp1 -> link = p;
	}
}

int main () {
	head = NULL;
	
	Insert (5);
	Insert (100);
	Insert (25);
	Insert (22);
	Insert (13);

	print ();
}