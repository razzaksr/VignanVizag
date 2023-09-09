#include<stdio.h>
void main()
{
	char maxi='Q', mini='w';
	printf("\n%d\t%d", maxi++, --mini);
	printf("\n%d\t%d", maxi, mini);
	printf("\n%c\t%c", maxi, mini);
	printf("\n%d\t%d", ++maxi, mini--);
	printf("\n%d\t%d", maxi, mini);
	printf("\n%c\t%c", maxi, mini);// S u
}
