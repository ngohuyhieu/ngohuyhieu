#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main6(int argc, char *argv[]) {
    float top, bottom, height;
    printf("vui long nhap top\n");
    scanf("%f",&top);
    printf("vui long nhap bottom\n");
    scanf("%f",&bottom);
    printf("vui long nhap height\n");
    scanf("%f",&height);
    printf("dien tich cua hinh thang la = %f",height * ((top + bottom) / 2));
	return 0;
}
