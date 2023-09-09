#include<stdio.h>

void main()
{
	int noExp,noPro;
	printf("\nTell us ur experience and projects u did: ");
	scanf("%d%d",&noExp,&noPro);
	if(noExp>=5&&noPro>=9)
	{
		printf("\nU would become Project Manager");
	}
	else if(noExp>=4&&noPro>=7)
	{
		printf("\nU would become Team lead");
	}
	else if(noExp>=2||noPro>=6)
	{
		printf("\nU would become L1 level employee");
	}
	else
	{
		printf("\nU will be the same as you are now");
	}
}
