#include <stdio.h>
//Girilen say�n�n ka� basamakl� oldu�unu bulan program.
int main(){
	int n;
	int i;
	printf("Bir sayi giriniz:");
	scanf("%d",&n);
while(n!=0){

n/=10;
		i++;
	}
		
printf("%d",i);
return 0;
}
