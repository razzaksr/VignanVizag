#include<stdio.h>
void equals(char[],char[]);
void main()
{
	char alpha[40]="Cognizant";
	char cosmo[40]="";
	int index=0;
	while(index<strlen(alpha))
	{
		cosmo[index]=alpha[index];
		index++;
	}
	printf("\n%s",cosmo);
	equals(cosmo,"cognizant");
}
void equals(char src[],char dest[])
{
	int index=0,count=0;
	while(index<strlen(src))
	{
		if(src[index]==dest[index]){count=1;}
		else{count=0;break;}index++;
	}
	(count==1)?printf("\nEquals"):printf("\nNotequals");
}
