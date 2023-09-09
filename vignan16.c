#include<stdio.h>
//giant wheel
void main()
{
	int seat, amt, cabin;
	for(cabin=1;cabin<=4;cabin++)
	{
		for(seat=1;seat<=4;seat++)
		{
			printf("\nEnter the amount: ");scanf("%d",&amt);
			if(amt>=100){printf("\nOK");}
			else{printf("\nU cant");}
		}
	}
}
