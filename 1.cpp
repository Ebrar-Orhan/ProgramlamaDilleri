#include<stdio.h>
//Bir dikdörtgenin kenarlarýný okuyup alanýný ve çevresini hesaplayan program.
int main(){
	int x;
	int y;
	int Alan;
	int Cevre;
	printf("Uzun kenari giriniz:");
		scanf("%d",&x);
	printf("Kisa kenari giriniz:");
		scanf("%d",&y);
	Alan=x*y;
	printf("Alan=%d\n",Alan);
	Cevre=2*(x+y);
	printf("Cevre=%d",Cevre);
	return 0;
	
	
	

}
