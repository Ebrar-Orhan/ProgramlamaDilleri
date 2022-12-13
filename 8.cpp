#include <stdio.h>
//3'ten 9'a kadar olan sayýlarýn toplamý

int main(){
	int i;
	int toplam=0;
	for(i=3;i<=9;i++){
		printf("%d+",i);
		toplam+=i;
}
	printf("=%d",toplam);
		return 0;
}
