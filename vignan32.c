#include<stdio.h>
void main()
{
	double lpa=8.9;
	double *tm,**pm;
	tm=&lpa;
	printf("\n%.1lf",lpa);
	printf("\n%d",&lpa);
	printf("\n%d",tm);
	printf("\n%d",&tm);
	printf("\n%.1lf",*tm);
	printf("\n%.1lf",*&lpa);
	pm=&tm;
	printf("\n%d",pm);
	printf("\n%d",*pm);
	printf("\n%.1lf",**pm);
}
