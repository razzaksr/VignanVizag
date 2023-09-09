#include<stdio.h>
void main()
{
	int pie='A', lollipop='d';
	printf("\n%d\t%d",pie,lollipop);
	pie*=4;lollipop/=2;
	printf("\n%d\t%d",pie,lollipop);
	lollipop+='A';pie-='[';
	printf("\n%d\t%d",pie,lollipop);
}
