#include<stdio.h>
void seek(int);
void change(int*);
void main()
{
	int alpha=30;
	seek(alpha);
	printf("\n%d in main",alpha);
	change(&alpha);
	printf("\n%d in main",alpha);
}
void seek(int alpha)
{
	alpha+=10;
	printf("\n%d in seek",alpha);
}
void change(int *beta)
{
	*beta *= 2;
	printf("\n%d in change",*beta);
}
