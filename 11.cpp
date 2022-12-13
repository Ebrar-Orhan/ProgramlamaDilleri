#include <stdio.h>
//Kullanýcýdan girilen 10 sayýnýn toplamýný veren program
int main(){
	int x;
	int toplam=0;
	int i;
	
	for(i=1;i<=10;i++){
		printf("Bir sayi giriniz:");
	scanf("%d",&x);
		
		toplam+=x;
	}
	printf("%d",toplam);
	return 0;
}
