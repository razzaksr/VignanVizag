#include<stdio.h>
#include<string.h>
void main()
{
	char desire[30]="";
	printf("\nEnter the skill set u have: ");
	gets(desire);
	printf("\nLet see what are all jobs available: %s",desire);
	if(strcmp(desire,"java")==0)
	{
		printf("\nWeb/ Full stack/ App developer with 8.9LPA");
	}
	else if(strcmp(desire,"python")==0)
	{
		printf("\nWeb/ IoT/ AI developer with 5.9LPA");
	}
	else
	{
		printf("\nU should update ur skillset");
	}
}
