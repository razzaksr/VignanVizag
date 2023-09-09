#include<stdio.h>
static int amount;
void deposit(int);
int withdraw(int);
int enquiry();
void main()
{
	amount=500;
	deposit(20000);
	int status=withdraw(15000);
	printf("\nWithdrawn status: %d",status);
	printf("\nAvailable balance is: %d",enquiry());
}
void deposit(int got)
{
	amount+=got;
	printf("\nDeposited");
}
int withdraw(int wish)
{
	if(amount>=wish){amount-=wish;return 1;}
	else{return 0;}
}
int enquiry(){return amount;}
