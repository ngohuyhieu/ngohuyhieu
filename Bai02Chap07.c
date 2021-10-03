#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main3(int argc, char *argv[]) {
	int a, b;
	printf("nhap so a\n");
	scanf("%d",&a);
	printf("nhap so b\n");
	scanf("%d",&b);
	if(a*b >=1000)
		printf(" %d*%d lon hon 1000", a,b);				
	else
		printf("%d*%d be hon 1000 ", a,b);	
	return 0;
}
