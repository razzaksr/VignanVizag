#include<stdio.h>
void main()
{
	int start, range, data;
	scanf("%d%d",&start,&range);
	for(data=1;data<=range;)
	{
		if(start==2||start==3||start==5||start==7||
		start%2!=0&&start%3!=0&&start%5!=0&&start%7!=0)
		{
			printf("\n%d",start);data++;
		}
		start++;
	}
}
