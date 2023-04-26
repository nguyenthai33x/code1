#include<stdio.h>
int main(){
	int giodau , giocuoi ;
	printf("\nNhap gio bat dau : ");
	scanf("%d",&giodau);
	printf("\nNhap gio ket thuc : ");
	scanf("%d",&giocuoi);
	
	float tongtien;
	float sogio;
	sogio=giocuoi-giodau;
	if(sogio<=3){
		tongtien = sogio * 50000;
		} else{
        tongtien = 3*50000 + (sogio-3)*50000*0.7;}
    if (giodau >= 14 && giocuoi <= 17){
        tongtien = tongtien *0.9;}
        printf("So tien phai tra la : %f ",tongtien);
            printf("So tien phai tra la : %f ",tongtien);
	}
	

