#include<stdio.h>
void main()
{
	int floor, emp;char letter='A';
	for(floor=5;floor>0;floor--)
	{
		for(emp=1;emp<=5;emp++)
		{
			if(emp>=floor){printf("%c ",letter);letter++;}
			else{printf(" ");}
		}
		printf("\n");
	}
}
/*
for(floor=1;floor<=5;floor++)
	{
		for(emp=1;emp<=5;emp++, letter++)
		{
			printf("%c",letter);
		}
		printf("\n");
	}
*/
