#include <stdio.h>
//Girilen say�n�n ilk ve son basama��n� bulan program.
int main(){
	int n;
	int first;
	int last;
	int i;
	printf("Bir sayi giriniz:");
	scanf("%d",&n);
	last=n%10;
	printf("Son basamak:%d\n",last);
	while(n>=10){
		n=n/10;
	}
	first=n;
	printf("Ilk basamak:%d",first);
	return 0;
	
}
