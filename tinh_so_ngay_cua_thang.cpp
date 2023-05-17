#include <stdio.h>
#include <math.h>

int main(){
	int m;
	printf("Nhap thang can kiem tra: ");
	scanf("%d", &m);
	if(m > 0 && m < 13){
		if(m % 2 == 0 && m >= 8){
			printf("31 ngay");
		}
		else{
			if(m % 2 != 0 && m >= 8){
				printf("30 ngay");
			}
			else{
				if(m % 2 == 0 && m <= 7 && m != 2){
					printf("30 ngay");
				}
				else{
					if(m == 2){
					printf("28 ngay");
					}	
					else{
					printf("31 ngay");
					}
				}
			}
		}	
	}
	else{
		printf("Khong co thang nay");
	}
	return 0;
}
