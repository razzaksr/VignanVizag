#include<stdio.h>
void main()
{
	int type;char gategory;
	printf("\nEnter the gategory and type: ");
	scanf("%c%d",&gategory,&type);
	if(type==2||type==3)
	{printf("\nU are tollfree");}
	else
	{
		if(gategory=='L'||gategory=='l')
		{
			printf("\nIts lightweight so cost is 50");
		}
		else if(gategory=='h'||gategory=='H')
		{
			printf("\nIts heavyweight so cost is 100");
		}
	}
}
