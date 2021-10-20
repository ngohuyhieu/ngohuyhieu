#include<stdio.h>

int tong(int n1, int n2);       
int hieu(int n1, int n2);
int tich(int n1, int n2);
float thuong(int n1, int n2);
        
main()
{
	int so1, so2;
	int cong,tru,nhan;
	float chia;
	int lua_chon;
	
	printf("\n\tNhap vao gia tri 1: ");
	scanf("%d", &so1);
	printf("\n\tNhap vao gia tri 2: ");
	scanf("%d", &so2);
	printf("\nNhap vao phep tinh ban muon.\n");
	scanf("%d", &lua_chon);
	switch(lua_chon)
	{
		case 1:
			cong = tong(so1,so2);           
			printf("\nTong =: %d", cong);
			break;
		case 2:
			tru = hieu(so1,so2);         
		    printf("\nHieu =: %d", tru);
			break;
		case 3:
			nhan = tich(so1,so2);          
		    printf("\nTich =: %d", nhan);
		    break;
		case 4:
			    chia = thuong(so1,so2);    
		        printf("\nThuong =: %f", chia);
		         
			break;
		default:
		    printf("\nKhong co phep tinh ban chon!");				
	}
	return 0;
}
                         
int tong(int so1, int so2)
{
	return (so1 + so2);
}
int hieu( int so1, int so2)
{
	return (so1 - so2);
}
int tich(int so1, int so2)
{
	return (so1 * so2);
}
float thuong(int so1, int so2)
{
	    return ((float)so1/(float)so2);    
}
