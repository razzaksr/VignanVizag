#include<stdio.h>
#include "vignan5.c"
void start()__attribute__((constructor));
void end()__attribute__((destructor));
void start()
{
	printf("\nBefore Main");
}
void main()
{
	extern int mask;
	mask=25;
	printf("\nIn my main: %d",mask);
}
void end()
{
	printf("\nAfter main");
}
