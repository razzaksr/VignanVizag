#include<stdio.h>
void main()
{
	int floor, limit=1, space, start;char var='A';
	for(floor=1;floor<=4;floor++)
	{
		for(space=4-1;space>=floor;space--)
		{
			printf(" ");
		}
		for(start=1;start<=limit;start++)
		{
			printf("%c", var);var++;
		}
		limit+=2;printf("\n");
	}
}
