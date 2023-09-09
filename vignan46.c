#include<stdio.h>
void series();
int number=1;
void main()
{series();}
void series()
{
	if(number>50)
		return;
	else
	{
		if(number%3==0)
			printf("\n%d",number);
	}
	number++;series();
}
