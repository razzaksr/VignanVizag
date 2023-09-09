#include<stdio.h>
void main()
{
	int oddcount=0, evencount=0, count=0, temp,sum=0;
	long int number;
	scanf("%ld",&number);
	while(number>0)
	{
		temp=number%10;count++;
		if(count%2!=0)
		{
			oddcount++;sum+=temp;
		}else{evencount++;}
		number/=10;
	}
	printf("\n%d\t%d",oddcount,evencount);
	(oddcount>evencount)?printf("\n%d Sum",sum):printf("\n%d",-1);
}
