#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main(int argc, char *argv[]) {
	char ch;
	printf("Enter a lower cased alphabet (a - z) : ");
	scanf("%c",&ch);
	if( ch < 'a' || ch > 'z')
		printf("\nCharater not a  lower cased alphabet");
	else
	 	switch(ch)
	{
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :	
			printf("\nCharater is a vowel");
			break;
		case 'z' :
			printf("\nLast Alphabet (z) was entered");
			break;
		default :
			printf("\nCharater is a consonant");
			break;
	}
	return 0;
}
