#include<stdio.h>
void main()
{
	float cc[7]={219.3F,119.7F,345.8F,448.1F,99.1F,199.4F,299.9F};
	int index=0;
	while(index<7)
	{
		if(cc[index]>=119.0F&&cc[index]<150.0F)
		{
			cc[index]=209.9F;
		}
		else if(cc[index]>=149.0F&&cc[index]<200.0F)
		{
			cc[index]=249.9F;
		}
		else if(cc[index]>=340.0)
		{
			cc[index]=300.9F;
		}
		printf("\n%.1f",cc[index]);index++;
	}
}
