#include<stdio.h>
int main(){
	char ky_tu[500]="que huong toi thai binh que huong nam tan";
	int i=0;
	int nguyen_am=0;
	for(i=0;i<(500);i++){
			
		if(ky_tu[i] =='a' || ky_tu[i] =='e' || ky_tu[i] =='i' || ky_tu[i] =='o' || ky_tu[i] =='y' || ky_tu[i] == 'w')
			
		nguyen_am++;
			
		}
		printf("chuoi '%s' \nco chua %d nguyen am",ky_tu,nguyen_am);
	
}
