#include<stdio.h>

// budget for buy pendrive

void main()
{
	int budget;
	printf("\nSay ur budget to buy pendrive: ");
	scanf("%d",&budget);
	if(budget>=400&&budget<800)
	{
		printf("\nU can buy 16gb sandisk, transcend");
	}
	else if(budget>=800&&budget<1000)
	{
		printf("\nU can buy usb3.0 16gb sandisk, transcend");
	}
	else if(budget>=1000)
	{
		printf("\nU can buy usb3.0 8gb,16gb,32gb sony");
	}
	else
	{
		printf("\nU wont get anything");
	}
}
