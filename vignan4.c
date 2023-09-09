#include<stdio.h>
void main()
{
	char alpha,cosmo;
	//alpha=getchar();cosmo=getchar();
	//alpha=getc(stdin);cosmo=getc(stdin);
	alpha=getch();cosmo=getch();
	printf("%c",alpha|cosmo);
}

/*2048 1024 512 256 128 64 32 16 8 4 2 1
if 89;
                      1      1 1     1
alpha 97                1   1          1
cosmo 65                1   0          1
                        1   1          1>> a
					  
					  
					  */
