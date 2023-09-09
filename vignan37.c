#include<stdio.h>
#include<string.h>
void main(int count,char *words[])
{
	double salary;
	int base;float percent;
	char name[30]="";
	strcpy(name,words[1]);
	sscanf(words[2],"%d",&base);
	sscanf(words[3],"%f",&percent);
	printf("\nCount of inputs: %d",count);
	salary=(base+(base*percent)/100);
	printf("\n%s will have salary: %.1lf", name, salary);
}
