#include<stdio.h>
void main()
{
	int lab[5]={50,45,65,30,52};
	int alpha,beta;
	alpha=0;
	while(alpha<5)
	{
		beta=alpha+1;
		while(beta<5)
		{
			if(lab[alpha]<lab[beta])
			{
				lab[alpha]^=lab[beta];lab[beta]^=lab[alpha];
				lab[alpha]^=lab[beta];
			}
			beta++;
		}
		alpha++;
	}
	alpha=0;
	while(alpha<5)
	{
		printf("\n%d",lab[alpha]);
		alpha++;
	}
}
