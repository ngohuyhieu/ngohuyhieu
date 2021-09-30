#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main9(int argc, char *argv[]) {
	int ChonSo;
	printf("chon so tuong ung\n");
	printf("so 1: Tinh chu vi va dien tich hinh tron\n");
	printf("so 2: Tinh chu vi và dien tich hinh vuong\n");
    printf("so 3: Tinh chu vi và dien tich hinh chu nhat\n");
	scanf("%d",&ChonSo);
	if(ChonSo == 1){
		int bankinh;
		printf(" nhap ban kinh\n");
		scanf("%d",&bankinh);
		printf("chu vi hinh tron = %f\n", 2*bankinh*3.14);
		printf("dien tich hinh tron = %f", bankinh * bankinh * 3.14);	
	}else if(ChonSo == 2){
		int canh;
		printf("nhap canh\n");
		scanf("%d",&canh);
		printf("chu vi hinh vuong = %d\n",canh * 4);
		printf("dien tich hinh vuong = %d\n",canh * canh);
	}else if(ChonSo == 3){
		int chieudai, chieurong;
		printf("chap chieu dai\n");
		scanf("%d",&chieudai);
		printf("nhap chieu rong\n");
		scanf("%d",&chieurong);
		printf("chu vi hinh chu nhat = %d\n",(chieudai + chieurong)*2);
		printf("dien tich hinh chu nhat = %d\n",chieudai * chieurong);
	}
	return 0;
}
