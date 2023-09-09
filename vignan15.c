#include<stdio.h>
// roller coaster
void main()
{
	int amount, capacity;
	capacity=1;// init
	while(capacity<=10)// cond
	{
		printf("\nEnter the amount: ");
		scanf("%d",&amount);
		if(amount>=50){printf("\nU r in");capacity++;}
		else{printf("\nU can't");}
		//capacity++;
	}
}
