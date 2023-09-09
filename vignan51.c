#include<stdio.h>
int price[7]={7999, 6500, 19000, 16700, 23800, 9999, 14500};
int index=0;
void discount();
void main()
{
	discount();
}
void discount()
{
	if(index>=7){return;}
	else
	{
		if(price[index]>=5000&&price[index]<10000)
		{
			price[index]-=(price[index]*5)/100;
			printf("\n5 Percent discount");
		}
		else if(price[index]>=10000&&price[index]<15000)
		{
			price[index]-=(price[index]*8)/100;
			printf("\n8 Percent discount");
		}
		else if(price[index]>=15000)
		{
			price[index]-=(price[index]*7)/100;
			printf("\n7 Percent discount");
		}
		printf("\n%d price updated ",price[index]);
	}
	index++;discount();
}
