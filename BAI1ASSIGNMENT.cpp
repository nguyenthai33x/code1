#include<stdio.h>
#include<stdlib.h>
	int main(){
		printf("------------------------------\n");
		printf("Menu Chuc Nang So 1:\n");
		printf("\t1. Kiem tra so nguyen\n");
		printf("\t2. Kiem tra so nguyen to\n");
		printf("\t3. Kiem tra so chinh phuong \n");
		printf("------------------------------\n");
		printf("Lua chon cua ban: ");
		int choose;
		scanf("%d" ,&choose);
		
		switch(choose){
			case 1:
				printf("Kiem tra so nguyen\n");
				printf("------------------\n\n");
				system("kiemtrasonguyen.exe");
				break;
			case 2:
				printf("Kiem tra so nguyen to\n");
				printf("------------------\n\n");
				system("kiemtrasonguyento.exe");
				break;
			case 3:
				printf("Kiem tra so chinh phuong\n");
				printf("------------------\n\n");
				system("kiemtrasochinhphuong.exe");
				break;	
			default:
				printf("Lua chon sai (Gia tri tu 1 den 3)");
		}		
		return 0;
	}
		
