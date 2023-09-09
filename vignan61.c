#include<stdio.h>
void insert(float*);
void traverse(float*);
void search(float*,float);
void update(float*);
int index=0;
void main()
{
	float land[4];insert(land);index=0;
	traverse(land);//index=0;search(land,560.4);
	index=0;update(land);index=0;traverse(land);
}
void update(float *extra)
{
	if(index==4){return;}
	else
	{extra[index]+=200.8F;}index++;update(extra);
}
void search(float *flat,float desire)
{
	if(index==4){return;}
	else
	{
	if(flat[index]>=desire)
	{printf("\nland survay: %.1f",flat[index]);}
	}
	index++;search(flat,desire);
}
void traverse(float *state)
{
	if(index==4){return;}
	else
	{printf("\nland survay: %.1f",state[index]);}
	index++;traverse(state);
}
void insert(float *layout)
{
	if(index==4){return;}
	else
	{
		printf("\nEnter the land survay: ");
		scanf("%f",&layout[index]);
	}
	index++;insert(layout);
}

