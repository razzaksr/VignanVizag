#include<stdio.h>
void main()
{
	int a,c=0;
	printf("enter number");
	scanf("%d",&a);
	while(a!=1)
	{
		if(a%2!=0)
		{
			c=1;
			break;
		}
		a=a/2;
	}
	if(c==0)
	{
		printf("is a power of 2");
	}
	else{
		printf("not a power of 2");
	}
}
