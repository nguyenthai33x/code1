#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	printf("+---------------Menu chuong trinh---------------------+|\n");
	printf("|\t1.Kiem tra so nguyen                           |\n");
	printf("|\t2.Tim uoc so chung va boi so chung cua 2 so    |\n");
	printf("|\t3.Tinh tien cho quan karaoke                   |\n");
	printf("|\t4.Tinh tien dien	                       |\n");  
	printf("|*Vui long chon chuc nang theo cu phap 1,2,3*          |\n");
	printf("+-----------------------------------------------------+|\n");
	printf("Lua chon cua ban: ");
		int choose;
		scanf("%d" ,&choose);
		
		switch(choose){
			case 1:
				printf("Kiem tra so nguyen\n");
				printf("------------------\n\n");
				system("BAI1ASSIGNMENT.exe");
				break;
			case 2:
				printf("Tim uoc so chung va boi so chung cua 2 so");
				printf("------------------\n\n");
				system("UCBC.exe");
				break;
			case 3:
				printf("Tinh tien cho quan karaoke \n");
				printf("------------------\n\n");
				system("KARAOKE.exe");
				break;
			case 4:
				printf("Tinh tien dien cua nha \n");
				printf("------------------\n\n");
				system("TINHTIENDIEN.exe");
				break;			
			default:
				printf("Lua chon sai (Gia tri tu 1 den 3)");
		}		
		return 0;
	}
