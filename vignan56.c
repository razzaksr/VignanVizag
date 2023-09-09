#include<stdio.h>
void main()
{
	int n,alpha[n], index, min1,min2;
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		scanf("%d",&alpha[index]);
	}
	min1=alpha[0];min2=alpha[0];
	index=0;
	while(index<n)
	{
		if(min1>alpha[index])
		{min2=min1;min1=alpha[index];}
		else if(min2>alpha[index]&&min1!=alpha[index])
		{
			min2=alpha[index];
		}
		index++;
	}
	printf("\nMin1: %d \t Min2:%d",min1,min2);
	printf("\n%d",(min1*min2));
}
