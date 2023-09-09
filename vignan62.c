#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct resource
{
	char skillset[30];
	int pay;
	struct resource *next;
};

struct resource *top;

void push()
{
	struct resource *one;
	char skill[30];int amt;
	one=(struct resource*)malloc(sizeof(struct resource));
	printf("\nEnter resource details");
	scanf("%s%d",skill,&amt);
	strcpy(one->skillset,skill);
	one->pay=amt;
	if(top==NULL)
	{
		printf("\nStack is Empty");
		one->next=NULL;
	}
	one->next=top;
	top=one;
	printf("\nResource added at top");	
}
void traverse()
{
	struct resource *temp;
	temp=top;
	while(temp!=NULL)
	{
		printf("\n%s\t%d",temp->skillset,temp->pay);
		temp=temp->next;
	}
}
void pop()
{
	struct resource *temp;
	if(top==NULL)
	{
		printf("\nCan't pop");
	}
	else
	{
		temp=top;top=top->next;
		free(temp);
		printf("\npoped top element");
	}
}
void main()
{
	push();push();push();
	traverse();pop();traverse();
}
