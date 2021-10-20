#include<stdio.h>
	int main1(){	
	int so[10]; 
	int i,j,emp;
	for(i=0;i<10;i++)
	{
		printf("\n Nhap vao gia tri cua mang: ");
		scanf("%d",&so[i]);
	}
	for(i=0;i<10-1;i++)
	{
		for(j=i;j<10;j++)
		{
			if(so[i]<so[j]){
			emp=so[i];
			so[i]=so[j];
			so[j]=emp;
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
	printf("\nthu tu [%d] nguoc lai la: %d",i,so[i]);
	}
}
