#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main5(int argc, char *argv[]) {
	char g;
	int phucap;
	printf("nhap so g :");
	scanf("%c",&g);
	if(g == 'A'){
		phucap =300;
		printf("phu cap la %d",phucap);
 	}
 	else if(g=='B'){
 		phucap =250;
 		printf("phu cap la %d",phucap);
	 }
	 else{
	 	phucap =100;
	 	printf("phu cap la %d",phucap);
	 }
	return 0;
}
