#include<stdio.h>
void show(char,char);
void main()
{show('A','a');}
void show(char block,char small)
{
	if(block>90&&small>122)
	{
		return;
	}
	else
	{
		printf("%c %c\t",block,small);
	}block++;small++;show(block,small);
}
