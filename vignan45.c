#include<stdio.h>
void main()
{
	int array[5]={14,2,9,13,7},min1,min2,index;
	min1=array[0];min2=array[0];
	for(index=0;index<5;index++)
	{
		if(array[index]<min1)
		{min2=min1;min1=array[index];}
		else if(array[index]<min2&&min2!=min1)
			min2=array[index];
	}
	printf("\nLeast two elements %d  %d",min1,min2);
	printf("\nProduct is: %d",(min1*min2));
}
