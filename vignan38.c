#include<stdio.h>
double mobPrice[4]={3450.3,9999.3,5600.5,2900.8};
static int index=0;
void clean();
void main()
{clean();}
void clean()
{
	if(index>=4)
	{
		return;
	}
	else
	{
		printf("\n%.1lf",mobPrice[index]);index++;
		clean();
	}
}
