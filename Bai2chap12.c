#include<stdio.h>
int main(){
	char ky_tu[500]="toi la ngo huy hieu la mot sinh vien it co the noi la rat ga mo, nhung vi dong tien nen... phai no luc";
	int i=0;
	int nguyen_am=0;
	int phu_am=0;
	for(i=0;i<(500);i++){
			
		if(ky_tu[i] =='a' || ky_tu[i] =='e' || ky_tu[i] =='i' || ky_tu[i] =='o' || ky_tu[i] =='y' || ky_tu[i] == 'w')
			
		nguyen_am++;
		else
		phu_am++;	
		}
		printf("chuoi '%s' \nco chua %d nguyen am \nva co chua %d phu am",ky_tu,nguyen_am,phu_am);
	
}
