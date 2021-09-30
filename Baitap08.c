#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  	int int1;
  	float float2;
  	double double3;
  	char char4[40];
  	long int longInt5;
  	long double longDouble6;
  	
  	printf("Kieu Int: ");
	scanf("%d",&int1);
	
	printf("Kieu float: ");
  	scanf("%f",&float2);
  	
  	printf("Kieu double: ");
  	scanf("%lf",&double3);
  	
  	printf("Kieu char: ");
  	scanf("%s",&char4);
  	
  	printf("Kieu long int: ");
  	scanf("%ld",&longInt5);
  	
  	printf("Kieu long double: ");
  	scanf("%Lf",&longDouble6);
  	
  	printf("\nKieu Int : %lu\n",sizeof(int));
  	printf("so nguyen:%d\n \n", int1);
  	
	printf("Kieu float %lu\n",sizeof(float));
  	printf("so thuc kieu float:%f\n \n", float2);
  	
  	printf("Kieu double %lu\n",sizeof(double));
  	printf("so thuc kieu double:%lf\n \n", double3);
  	
  	  	
  	printf("kieu char %lu:\n",sizeof(char));
  	printf(" kieu char:%s\n \n", char4);


    printf("kieu long int %lu\n",sizeof(long int));
    printf("so nguyen kieu long int:%ld\n \n",longInt5);
    
    
    printf("kieu long double %lu:\n",sizeof(long double));
    printf("so thuc kieu long double:%Lf \n \n",longDouble6);
	return 0;
}
