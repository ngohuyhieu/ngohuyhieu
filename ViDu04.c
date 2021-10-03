#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main(int argc, char *argv[]) {
	char c;
	printf("Please enter a charater : ");
	scanf("%c",&c);
	if( c >= 'A' && c <= 'z'){	
		printf("Lowercase charater + %c", c + 'a'-'A');
}
	else
		printf("Charater Entered is = %c",c);
	return 0;
}
