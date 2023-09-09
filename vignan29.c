#include<stdio.h>
#include<string.h>
void main()
{
	char *innovator="James Gosling";
	printf("\n%s",innovator);
	printf("\n%d\t%d\n",sizeof(innovator),strlen(innovator));
	char *basement="";
	printf("\n%d\t%d\n",sizeof(basement),strlen(basement));
}
