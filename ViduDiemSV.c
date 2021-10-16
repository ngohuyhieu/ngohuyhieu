#include <stdio.h>
#include <stdlib.h>
int xeploai(int asmm, int lythuyet, int thuchanh);

int main() {
	int asmm,lythuyet,thuchanh,xl;
	int i;
	char luachon='y';
	while(luachon=='y'||luachon=='Y'){
		printf("moi ban nhap diem sinh vien\n");
		printf("\tNhap diem asmm: ");
		scanf("%d",&asmm);
		printf("\n\tNhap diem ly thuyet: ");
		scanf("%d",&lythuyet);
		printf("\n\tNhap diem thuc hanh: ");
		scanf("%d",&thuchanh);
		xl = xeploai(asmm,lythuyet,thuchanh);
		switch(xl){
			case 0:
				printf("\n\t*******************ban da truot******************** \n\n");
			break;
			case 1:
				printf("\n\t*******************ban da do*********************** \n\n");
			break;
			case 2:
				printf("\n\t*******************ban xep loai kha**************** \n\n");
			break;
			case 3:
				printf("\n\t ******************ban xep loai gioi*************** \n\n");
			break;
			}
		printf("ban co muon tiep tuc nhap thi sinh khac khong (Y/N) ???\n\n\n");
		scanf("%s",&luachon);
		if(luachon!='y' || luachon!='Y'){
			printf("\t\ttam biet");
		}
	}

}
int xeploai(int asmm, int lythuyet, int thuchanh){
	int xl, tv;
	xl=(asmm+lythuyet+thuchanh)/3;
	if(xl<40){
		tv=0;
	}else if(40<xl && xl<60){
		tv=1;
	}else if(61<xl && xl<79){
		tv=2;
	}else if(xl>=80){
		tv=3;
	}
	return tv;	
}
