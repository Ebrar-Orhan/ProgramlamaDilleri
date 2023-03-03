#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Þans oyununu.
Ýki zar atýlýr.Zarlarýn toplamý hesaplanýr.Ýlk atýþta 7 veya 11 gelirse oyuncu kazanýr.Ýlk atýþta 2,3 veya 12 gelirse oyuncu kaybeder.
Ýlk atýþta 4,5,6,8,9,10 gelirse bu oyuncunun puaný oluyor.Oyuncu 7 atmadan önce kendi puanýný tutturmalýdýr*/
int main(){
	int zar_1,zar_2;
	int toplam=0;
	int puan;
	int i=0;
	srand(time(NULL));
	zar_1=rand()%6+1;
	zar_2=rand()%6+1;
	toplam=zar_1+zar_2;
	if(toplam==7||toplam==11){
	    printf("Toplam=%d\n",toplam);
		printf("KAZANDINIZ!");}
    else if(toplam==2||toplam==3||toplam==12){
        printf("Toplam=%d\n",toplam);
		printf("KAYBETTINIZ!");}
	else if(toplam==4||toplam==5||toplam==6||toplam==8||toplam==9||toplam==10){
		puan=toplam;
	        while(toplam==puan){
			    srand(time(NULL));
				zar_1=rand()%6+1;
			    zar_2=rand()%6+1;
			    toplam=zar_1+zar_2;
			    if(toplam==7){
			    printf("Toplam=%d\n",toplam);
			    printf("KAYBETTINIZ!\nIlk puaninizi tutturamadiniz.");
				break;
				}
				if(toplam==puan){
					printf("Toplam=%d\n",toplam);
					printf("KAZANDINIZ!\n");
					break;
				}
				i++;
				}
	return 0;	
}
}
