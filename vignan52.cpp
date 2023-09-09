#include<stdio.h>
int main()
{
	int max[4]={12,56,7,14};
	int a,b;
	for(a=0;a<4-1;a++)
	{
		for(b=0;b<4-a-1;b++)
		{
			if(max[b]>max[b+1])
			{
				max[b]^=max[b+1];
				max[b+1]^=max[b];
				max[b]^=max[b+1];
			}
		}
	}
	for(a=0;a<4;a++)
	{
		printf("\n%d",max[a]);
	}
	return 0;
}
