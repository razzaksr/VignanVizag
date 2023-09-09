#include<stdio.h>
void swap(char,char);
int convert(char);
void main()
{
	char max='A',min='a';
	void (*funOne)(char,char)=swap;
	(*funOne)(max,min);
	int (*funTwo)(char)=convert;
	printf("\n%d",(*funTwo)(min));
}
void swap(char one,char two)
{
	printf("\nInitally: %c\t%c",one,two);
	one^=two;two^=one;one^=two;
	printf("\nLater: %c\t%c",one,two);
}
int convert(char wish)
{return wish;}
