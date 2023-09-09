#include<stdio.h>
#include "file1.c"

void init()__attribute__((constructor));
void destroy()__attribute__((destructor));

void init()
{
	extern char alpha,beta;
	alpha=getchar();beta=getchar();
	printf("\n%d in constructor ",
	(alpha++ - --beta));
}
void destroy()
{
	extern char alpha,beta;
	alpha=getch();beta=getch();
	(alpha*=4);(beta%=3);
	printf("\n%d",alpha);
	printf("\n%d",beta);
}
void main()
{
	extern char alpha,beta;
	alpha=getchar();beta=getchar();
	printf("\n%d",alpha>>2);
	printf("\n%d",beta<<3);
}
