#include<stdio.h>
double package[5];
int index=0;
void add();
void main()
{
	add();
	int i=0;
	while(i<5)
	{
		printf("\n%lf",package[i]);i++;
	}
}
void add()
{
	if(index>=5)
	{return;}
	else
	{
		printf("\nEnter the desired salary: ");
		scanf("%lf",&package[index]);index++;
		add();
	}
}
