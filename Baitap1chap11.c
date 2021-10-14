#include<stdio.h>
#include<string.h>
int main(){
	char alpha[7][7];
	int i;
	printf("nhap chu: \n");
	
	for(i=0;i<7;i++){	
	scanf("%s",alpha[i]);
	}
	
	int count1, count2;
	char alphaTemp[7];
	
	for(count1=0;count1<7;count1++){
		for(count2=count1 + 1;count2<7;count2++){
			if(strcmp(alpha[count1],alpha[count2])>0){
				strcpy(alphaTemp,alpha[count1]);
				strcpy(alpha[count1],alpha[count2]);
				strcpy(alpha[count2],alphaTemp);
			}
		}
	}
	
	for(i=0;i<7;i++){
		printf("%s \n",alpha[i]);
	}
		
	}
