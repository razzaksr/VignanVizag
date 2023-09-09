#include<stdio.h>
static char data='R';
void bitwise(char);
int unary(int, int);
char arithmetic();
void main()
{
	bitwise(98);
	int accept=unary(78,'S');
	printf("\nAccepted is: %d",accept);
	printf("\nAccepted fromarithemetic: %c",arithmetic());
}
char arithmetic()
{return data*2-40;}
int unary(int pie, int lollipop)
{
	int temp;
	temp=pie++ - --lollipop * ++pie;
	return temp;
}
void bitwise(char wish)
{
	printf("\nBitwise AND: %d",(data&wish));
	printf("\nBitwise OR: %d",(data|wish));
	printf("\nBitwise <<: %d",(wish>>4));
	printf("\nBitwise >>: %d",(wish<<3));
}
