#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1(int argc, char *argv[]) {
	int a, b;
	printf("nhap so a\n");
	scanf("%d",&a);
	printf("nhap so b\n");
	scanf("%d",&b);
	if(a%b ==0)
		printf("so a chia het cho b\n");
	else
		printf("so a khong chia het cho b\n");	
	return 0;
}
