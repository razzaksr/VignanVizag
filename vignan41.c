#include<stdio.h>
#include<stdlib.h>
void opposite(int*);
void display(int*);
static int index=0, end=4;
void main()
{
	int *wind;
	wind=(int*)calloc(5,sizeof(int));
	*(wind+0)=23;*(wind+1)=76;*(wind+2)=67;
	*(wind+3)=76;*(wind+4)=98;
	index=0;opposite(wind);index=0;
	printf("\n\nAfter reverse:\n\n");
	display(wind);free(wind);
}
void opposite(int *order)
{
	if(index>=end){return;}
	else
	{
		*(order+index) ^= *(order+end);
		*(order+end) ^= *(order+index);
		*(order+index) ^= *(order+end);
		index++;end--;opposite(order);
	}
}
void display(int *alpha)
{
	if(index>=5){return;}
	else
	{
		printf("\n%d",*(alpha+index));index++;
		display(alpha);
	}
}
