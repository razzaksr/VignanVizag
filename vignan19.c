#include<stdio.h>
void main()
{
	int cuttoff[10];int index;
	for(index=0;index<10;index++)
	{
		printf("\nPlease tell us cuttoff %d", index);
		scanf("%d",&cuttoff[index]);
	}
	index=9;
	while(index>=0)
	{
		printf("\n%d",cuttoff[index]);
		index--;
	}
}
