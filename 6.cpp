#include <stdio.h>
//Girilen iki sayýnýn ekok hesabýný yapan program.
int main(){
	int sayi1,sayi2;
	int ekok;
	int c=1;
		printf("Birinci sayiyi giriniz:");	
			scanf("%d",&sayi1);
				printf("Ikinci sayiyi giriniz:");	
			scanf("%d",&sayi2);
	while(1){
		c++;
		if((c%sayi1==0)&&(c%sayi2==0)){
		
			ekok =c;
			break;
		}
	}
	printf("Ekok:%d",ekok);
	return 0;
	
		
}
