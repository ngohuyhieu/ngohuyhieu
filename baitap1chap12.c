#include<stdio.h>
int main(){
	int num[10], i, min, max;
	for(i=0;i<=10;i++){
	printf("nhap so [%d]: ",i);
	scanf("%d",&num[i]);
	}
	min=num[0];
	max=num[0];
	for(i=0;i<11;i++){
		if(min>num[i])
		min=num[i];
		if(max<num[i])
		max=num[i];
	}
	printf("min= %d\n",min);
	printf("max= %d",max);
}
