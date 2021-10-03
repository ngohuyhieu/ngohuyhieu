#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main2(int argc, char *argv[]) {
	int x, y;
	printf("nhap so x :");
	scanf("%d",&x);
	printf("nhap so y :");
	scanf("%d",&y);
	if(x<2000 || x>3000 && 100<y<500){
		printf("so duoc in ra %d\n",x);
		printf("so duoc in ra %d",y);
	}
	else if(x>2000 || x < 3000 && 100>y>500)
		printf(" so khong hop le vui long nhap so khac");
	return 0;
}
