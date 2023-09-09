#include<stdio.h>
void main()
{
	char name[20]="", skillset[20]="";
	int exp;double salary;
	//scanf("%s%s%d%lf",name,skillset,&exp,&salary);
	//printf("\nYour info:\n%s\n%s\n%d\n%.1lf",
	//name,skillset,exp,salary);
	/*gets(name);
	gets(skillset);
	puts(name);
	puts(skillset);*/
	fgets(skillset,sizeof(skillset),stdin);
	puts(skillset);
	
}
