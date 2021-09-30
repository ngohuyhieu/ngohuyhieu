#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main4(int argc, char *argv[]) {
   int num1, num2;
   printf("Nhap so num1\n");
   scanf("%d",&num1);
   printf("Nhap so num2\n");
   scanf("%d", &num2);
   printf("Tong = %d\n",num1 + num2);
   printf("Hieu = %d\n",num1 - num2);
   printf("Tich = %d\n",num1 * num2);
   printf("Thuong = %d\n",num1 / num2);
	return 0;
}

