#include<stdio.h>
//Bir dikd�rtgenin kenarlar�n� okuyup alan�n� ve �evresini hesaplayan program.
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
