#include<stdio.h>
void insert(int[3][4],int,int);
void sort(int[3][4],int,int);
void display(int[3][4],int,int);
void main()
{
	int build[3][4];
	insert(build,3,4);
	sort(build,3,4);
	printf("\nAfter sorting:\n");
	display(build,3,4);
}
void insert(int temp1[3][4],int row,int column)
{
	int floor, flat;
	for(floor=0;floor<row;floor++)
	{
		for(flat=0;flat<column;flat++)
		{
			printf("\nCount of family in %d floor %d flat",
			floor,flat);
			scanf("%d",&temp1[floor][flat]);
		}
	}
}
void sort(int temp2[3][4],int row,int column)
{
	int alpha, beta, cosmo;
	for(alpha=0;alpha<row;alpha++)
	{
		for(beta=0;beta<column;beta++)
		{
			for(cosmo=beta+1;cosmo<column;cosmo++)
			{
				if(temp2[alpha][beta]>temp2[alpha][cosmo])
				{
					temp2[alpha][beta]^=temp2[alpha][cosmo];
					temp2[alpha][cosmo]^=temp2[alpha][beta];
					temp2[alpha][beta]^=temp2[alpha][cosmo];
				}
			}
		}
	}
}
void display(int temp3[3][4],int row,int column)
{
	int floor,flat;
	for(floor=0;floor<row;floor++)
	{
		for(flat=0;flat<column;flat++)
		{
			printf("%d\t",temp3[floor][flat]);
		}
		printf("\n");
	}
}
