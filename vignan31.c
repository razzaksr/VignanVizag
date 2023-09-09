#include<stdio.h>
void main()
{
	char org[6][20]={"ZOHO","Infoview","Cognizant","Microsoft","Amazon","Flipkart"};
	int index=0;
	while(index<6)
	{
		if(index%2==0){strupr(org[index]);}
		else{strlwr(org[index]);}
		printf("\n%s",org[index]);index++;
	}
}
