#include<stdio.h>
void insert(float*);
void search(float*);
void traverse(float*);
void main()
{
	float screen[5];
	insert(screen);// insert(&screen[0]);
	search(screen);
	traverse(screen);
}
void search(float *mark)
{
	int times=1;
	while(times<=5)
	{
		if(*mark<=4.1F)
		{
			*mark=5.5F;
		}
		mark++;
		times++;
	}
}
void traverse(float *yield)
{
	int times=1;
	while(times<=5)
	{
		printf("\n%.1f",*yield);
		yield++;times++;
	}
}
void insert(float *jack)
{
	int times=1;
	while(times<=5)
	{
		scanf("%f",jack);
		jack++;times++;
	}
}
