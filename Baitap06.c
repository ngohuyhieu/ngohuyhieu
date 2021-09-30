#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main7(int argc, char *argv[]) {
    float toan, ly, hoa;
    printf("vui long nhap diem toan\n");
    scanf("%f",&toan);
    printf("vui long nhap diem ly\n");
    scanf("%f",&ly);
    printf("vui long nhap diem hoa\n");
    scanf("%f",&hoa);
    printf("tong diem ba mon = %f\n",toan + ly + hoa);
    printf("diem trung binh ba mon = %f\n",(toan+ly+hoa)/3);
	return 0;
}
