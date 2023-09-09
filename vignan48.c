#include<stdio.h>
int amount=10000;
int withdraw();
void main()
{
	int finally=withdraw();
	printf("\nFinally: %d",finally);
}
int withdraw()
{
	if(amount<=0)
	{return 0;}
	else
	{
		amount-=2000;
		printf("\nAvailable:%d",amount);
		withdraw();
	}
}
