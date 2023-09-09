#include<stdio.h>
#include<string.h>
void main()
{
	char kart[4][20];
	int index=0;
	while(index<4)
	{
		printf("\nEnter the product to add in kart");
		gets(kart[index]);
		printf("\nWhat u added recently is: %s",kart[index]);
		index++;
	}
}
