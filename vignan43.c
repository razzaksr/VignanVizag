#include<stdio.h>
void drawPrintPatter(int);
void main()
{
	int input;printf("\nEnter the odd number: ");
	scanf("%d",&input);drawPrintPattern(input);
}
void drawPrintPattern(int user)
{
	int k,j,i,l,n;
	for(j=1;j<=user;j+=2)
	{
		for(k=1;k<=user-j;k+=2)
		printf("*");
		for(l=j;l>=1;l--)
		printf("%d",1);
		for(n=1;n<=user-j;n+=2)
		printf("*");
		printf("\n");
	}
}
