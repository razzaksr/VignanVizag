#include<stdio.h>
#include<stdlib.h>
void main()
{
	double *pendrive;int index=0;
	pendrive=(double*)calloc(3,sizeof(double));
	*(pendrive+0)=799.9;*(pendrive+1)=459.9;
	*(pendrive+2)=1299.9;
	pendrive=realloc(pendrive,7*sizeof(double));
	*(pendrive+3)=769.2;*(pendrive+4)=999.1;
	*(pendrive+5)=890.6;*(pendrive+6)=490.2;
	while(index<7)
	{
		printf("\n%.1lf",*(pendrive+index));index++;
	}free(pendrive);
}
