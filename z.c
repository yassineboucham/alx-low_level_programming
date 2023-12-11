#include <stdio.h>
#include <stdlib.h>
typedef struct LinkList
{
	int data;

	struct LinkList *next;
} LL;

int main(void)
{
	LL *head;
head = (LL *)malloc(sizeof(LL));
head->data = 1;
	LL *el1;
el1 = (LL *)malloc(sizeof(LL));
el1->data = 2;
	head->next = el1;
	LL *el2;
el2 = (LL *)malloc(sizeof(LL));
el2->data = 3;
	el1->next = el2;
	el2->next = NULL;
LL *printlist = head;
while (printlist != NULL)
{
	printf("%d", printlist->data);
	printlist = printlist->next;
}

}
