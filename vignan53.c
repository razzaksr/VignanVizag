#include<stdio.h>
void arrange(int*,int,int);
void sortAndCombine(int*,int,int,int);
void main()
{
	int index=0;
	int numbers[7]={89,34,12,8,4,7,2};
	arrange(numbers,0,6);
	while(index<7)
	{
		printf("\n%d",numbers[index]);index++;
	}
}
void sortAndCombine(int *bundle, int start, int center, int last)
{
	int lsize, rsize, alpha, beta, cosmo;
	lsize=center-start+1;
	rsize=last-center;
	int left[lsize], right[rsize];
	
	//Copying
	for(alpha=0;alpha<lsize;alpha++)
	{
		left[alpha]=bundle[start+alpha];
	}
	for(beta=0;beta<rsize;beta++)
	{
		right[beta]=bundle[center+1+beta];
	}
	
	//sorting
	alpha=0;beta=0;cosmo=start;
	while(alpha<lsize&&beta<rsize)
	{
		if(left[alpha]<=right[beta])
		{
			bundle[cosmo]=left[alpha];alpha++;
		}
		else
		{
			bundle[cosmo]=right[beta];beta++;
		}
		cosmo++;
	}
	
	// add remaining
	while(alpha<lsize)
	{
		bundle[cosmo]=left[alpha];alpha++;cosmo++;
	}
	while(beta<rsize)
	{
		bundle[cosmo]=right[beta];beta++;cosmo++;
	}
}
void arrange(int *source, int init, int end)
{
	if(end>init)
	{
		int mid=init+(end-init)/2;
		//printf("\n%d",mid);
		arrange(source,init,mid);
		arrange(source,(mid+1),end);
		sortAndCombine(source,init,mid,end);
	}
}
