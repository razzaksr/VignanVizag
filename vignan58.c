#include<stdio.h>
void main()
{
	int asize,bsize,a[asize],b[bsize];
	int i,j,min1,min2,final;
	scanf("%d",&asize);
	for(i=0;i<asize;i++)
	{scanf("%d",&a[i]);}
	scanf("%d",&bsize);
	for(j=0;j<bsize;j++)
	{scanf("%d",&b[j]);}
	alpha:
	min1=a[0];min2=b[0];
	for(i=0;i<asize;i++)
	{if(a[i]<min1&&a[i]!=final){min1=a[i];}}
	for(j=0;j<bsize;j++)
	{if(b[j]<min2&&b[j]!=final){min2=b[j];}}
	if(min1==min2)
	{final=min1;goto alpha;}
	else if(min1>min2){printf("\n%d is minimum",min2);}
	else {printf("\n%d is minimum",min1);}
}
