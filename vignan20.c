#include<stdio.h>
void main()
{
	double package[10]={2.5,9.3,8.8,12.5,3.4,5.5,1.8,2.0,7.5,3.5};
	double expect;int index;
	printf("Say ur expectation: ");
	scanf("%lf",&expect);
	for(index=0;index<10;index++)
	{
		if(expect<=package[index])
		{
			printf("\n%lf also u would get at %d",
			package[index],(index+1));
		}
	}
}
