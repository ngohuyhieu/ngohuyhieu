#include "stdio.h"
int main(){
	int so[5], i; 
	for(i=0;i<5;i++){
		printf("nhap gia tri cua mang[%d]: ",i);
		scanf("%d",so[i]);
	}
	int temp=0;
	for(i=0;i<2;i++){
		temp = so[i];    
		so[i] = so[4-i];
		so[4-i] = temp;	
	}
	printf("dao nguoc cua mang la:\n");
	for(i=0;i<5;i++){
		printf("%d\n",so[i]);
	}
}

