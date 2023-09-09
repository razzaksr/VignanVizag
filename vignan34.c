#include<stdio.h>
void main()
{
	double salary[4]={5.6,8.9,2.3,1.9};
	double *mark;int times=1;// start
	mark=salary;//mark=&salary[0]
	while(times<=4)
	{
		printf("\n%.1lf",*mark);
		mark++;
		times++;
	}
}
