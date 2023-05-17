#include <stdio.h>

int main(){
	int t, n;
	printf("Nhap thang nam: ");
	scanf("%d%d", &t, &n);
	if(t >= 1 && t <= 12 && n > 0){
		if((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)){
			if((t >= 8 && t <= 12 && t % 2 == 0) || (t >= 1 && t <= 7 && t % 2 != 0)){
				printf("31 ngay");
			}
			if((t >= 8 && t <= 12 && t % 2 != 0) || (t >= 1 && t <= 7 && t % 2 == 0 && t != 2)){
				printf("30 ngay");
			}
			if(t >= 1 && t <= 7 && t % 2 == 0 && t == 2){
				printf("29 ngay");
			}
		}
		else{
			if((t >= 8 && t <= 12 && t % 2 == 0) || (t >= 1 && t <= 7 && t % 2 != 0)){
				printf("31 ngay");
			}
			if((t >= 8 && t <= 12 && t % 2 != 0) || (t >= 1 && t <= 7 && t % 2 == 0 && t != 2)){
				printf("30 ngay");
			}
			if(t >= 1 && t <= 7 && t % 2 == 0 && t == 2){
				printf("28 ngay");
			}
		}
	}
	else{
		printf("INVALID");
	}
	return 0;
}
