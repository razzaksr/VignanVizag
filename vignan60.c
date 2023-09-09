#include<stdio.h>
void update(int);
void alter(int[]);
void main()
{
	int pc[4]={90,40,30,50};update(pc[2]);
	printf("\nIn My main: %d",pc[2]);alter(pc);
	printf("\nIn My main: %d",pc[2]);
}
void alter(int *count){count[2]+=20;}
void update(int lab)
{
	printf("\nBefore updation: %d",lab);
	lab*=2;
	printf("\nAfter updation: %d",lab);
}
