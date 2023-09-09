#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *alpha;int index;
	alpha=(int*)calloc(3,sizeof(int));
	printf("\nInitallly: %d",alpha);
	*(alpha+0)=89;*(alpha+2)=88;*(alpha+1)=21;
	index=0;
	while(index<3)
	{
		printf("\n%d",*(alpha+index));
		index++;
	}
	alpha=realloc(alpha,1*sizeof(int));
	*(alpha+3)=90;
	printf("\nNext: %d",alpha);
	index=0;
	while(alpha!=NULL&&index<4)
	{
		printf("\n%d",*(alpha+index));
		index++;
	}
	free(alpha);
}
