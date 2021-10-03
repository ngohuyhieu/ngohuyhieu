#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main6(int argc, char *argv[]) {
	int sodiem;
	printf("vui long nhap so diem cua hoc sinh :");
	scanf("%d",&sodiem);
	if(sodiem > 75)
		printf("hoc sinh duoc diem A");
	else if(60 < sodiem < 75)
		printf("hoc sinh duoc diem B");
	else if(45 < sodiem < 60)
		printf("hoc sinh duoc diem C"); 
	else if(35 < sodiem < 45)
		printf("hoc sinh duoc diem D");
	else if(sodiem < 35)
		printf("hoc sinh duoc diem E");
	return 0;
}
