#include"stdio.h"
int main(){
	int songuoi,tongtien,thue,i,soluong,mon;
	printf("chao munh ban den voi lala happy\n");
	printf("ban di bao nhieu nguoi: \n");
	scanf("%d",&songuoi);
	int so[songuoi];
	printf("1: capuchino 25k\n");
	printf("2: tra sua tran chau 40k\n");
	printf("3: tra da 5k\n");
	printf("4: bac xiu 35k\n");
	printf("5: nuoc ep luu 20k\n\n\n");
	for(i=0;i<songuoi;i++){
		printf("ban thu [%d] muon uong gi: \n",i+1);
		scanf("%d",&mon);
		so[i] = mon;
	}
	
	
	
	for(i=0;i<songuoi;i++){
		if(so[i] == 1){
		 tongtien = tongtien + 25;
		}else if(so[i]==2){
			tongtien=tongtien+40;
		}else if(so[i]==3) {
			tongtien=tongtien+5;
		}else if(so[i]==4){
			tongtien=tongtien+35;
		}else if(so[i]==5){
			tongtien=tongtien+20;
		}
	}
		printf("tong don hang la: %d\n",tongtien);
		printf("thue: %f\n",tongtien * 0.1);
		printf("tong so tien khach phai tra la: %f",tongtien+(tongtien*0.1));
}
