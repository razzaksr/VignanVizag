#include<stdio.h>

// bitwise

void main()
{
	char eclairs=89, oreo='R';
	int alpha= eclairs&oreo;
	printf("\n%d",alpha);
	printf("\n%c",eclairs|oreo);
	printf("\n%d",eclairs>>4);
	printf("\n%d",oreo<<3);
	char migrate='y';
	printf("\n%d",migrate<<6);
	printf("\n%d",eclairs^oreo);
}
