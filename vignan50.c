#include<stdio.h>
int labs[10]={45,89,23,66,34,56,90,30,40,30};
int index=0;
void shortlist();
void main()
{
	shortlist();
}
void shortlist()
{
	if(index>=10){return;}
	else
	{
		if(labs[index]>=50)
		{printf("\nPC count: %d",labs[index]);}
	}
	index++;shortlist();
}
