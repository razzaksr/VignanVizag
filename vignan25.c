#include<stdio.h>
void search(double[],int);void insert(double[],int);
void main()
{double myOffice[4];insert(myOffice,4);search(myOffice,4);}
void insert(double get[],int size)
{
	int index;
	for(index=0;index<size;index++){scanf("%lf",&get[index]);}
}
void search(double much[],int size)
{
	int index;
	for(index=0;index<size;index++)
	{
		if(much[index]>7){printf("\n%lf Eligible for layoff",
		much[index]);}
	}
}
