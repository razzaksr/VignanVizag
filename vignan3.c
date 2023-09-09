#include<stdio.h>
void main()
{
	char finalone[50]="";
	char pro[30]="";int price;
	scanf("%s%d",pro,&price);
	sprintf(finalone,
	"Your order info: %s with price of %d",
	pro,price);
	printf("\n%s",finalone);
}
// 
