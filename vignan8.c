#include<stdio.h>
void main()
{
	int kalam='K', hegde='s';
	printf("\n%c\t%c",kalam,hegde);
	kalam=kalam*hegde;
	hegde=kalam/hegde;
	kalam=kalam/hegde;
	printf("\n%c\t%c",kalam,hegde);
}
