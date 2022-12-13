#include <stdio.h>
int main(){
	int sayi;
	int tersi=0;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	int temp=sayi;
	
	while(temp!=0){
		tersi=tersi*10;
		tersi+=temp%10;
		temp=temp/10;
		}
		if (sayi==tersi)
		printf("%d sayisi polindomdur.",sayi);
		else 
		printf("%d sayisi polindrom degildir.",sayi);
		return 0;
	
}
