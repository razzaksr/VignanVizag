#include<stdio.h>
#include<stdlib.h>
void insert(int*); 
static int index=0;
void main()
{
	int *seats;seats=(int*)calloc(10,sizeof(int));
	insert(seats);free(seats);
}
void insert(int *axe)
{
	if(index>=10){return;}
	else
	{
		printf("\nPlease say the cuttoff: ");
		scanf("%d",(axe+index));
		printf("\n%d",*(axe+index));
		index++;insert(axe);
	}
}
