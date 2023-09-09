#include<stdio.h>
#include<stdlib.h>
void searchUpdate(int*);
void opposite(int*);
void display(int*);
static int index=0, end=4;
void main()
{
	int *wind;
	wind=(int*)calloc(5,sizeof(int));
	*(wind+0)=23;*(wind+1)=56;*(wind+2)=47;
	*(wind+3)=76;*(wind+4)=98;searchUpdate(wind);
	index=0;opposite(wind);index=0;
	printf("\n\nAfter reverse:\n\n");display(wind);
	free(wind);
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
void searchUpdate(int *kevin)
{
if(index>=5)
{return;}	
	else{
		if(*(kevin+index)>=40 && *(kevin+index)<=70)
		{
			*(kevin+index)+=20;
		}
		printf("\n%d",*(kevin+index));
		index++;
		searchUpdate(kevin);
	}
}
