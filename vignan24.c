#include<stdio.h>
void simple(int);
void sample(int[]);
void main()
{
	int myData=90;int myGroup[4]={12,78,34,11};
	printf("\n%d in main",myData);simple(myData);
	printf("\n%d in main",myData);
	printf("\n%d 1th index in main",myGroup[1]);
	sample(myGroup);
	printf("\n%d 1th index in main",myGroup[1]);
}
void sample(int receive[])
{
	printf("\nreceived 1th index: %d",receive[1]);
	receive[1]+=10;
	printf("\nchanges in received 1th index: %d",receive[1]);
}
void simple(int accept)
{
	printf("\naccepted: %d",accept);
	accept*=2;
	printf("\nvhanges in accepted: %d",accept);
}
