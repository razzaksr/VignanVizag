#include<stdio.h>
void find(int *data,int size)
{
	int dup1=0,dup2=0,an,ban;
	for(an=0;an<size;an++)
	{
		for(ban=an+1;ban<size;ban++)
		{
			//if(c==2){break;}
			if(data[an]==data[ban])
			{
				if(dup1==0){dup1=data[an];}
				else if(data[an]==dup1)
				{
					dup1=data[an];//c++;
				}
				if(dup2==0&&data[an]!=dup1){dup2=data[an];}
				else if(data[an]==dup2&&data[an]!=dup1)
				{
					dup2=data[an];//c++;
				}
			}
		}
	}
	printf("\n%d\t%d",dup1,dup2);
	printf("\n%d",(dup1*dup2));
}
void main()
{
	int size,dup1,dup2,an,ban,c=0;
	int data[size];
	dup1=0;dup2=0;printf("\nArr length");
	scanf("%d",&size);printf("\nArr elems");
	for(an=0;an<size;an++)
	{scanf("%d",&data[an]);}
	find(data,size);
}
