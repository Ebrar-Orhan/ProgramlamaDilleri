#include <stdio.h>
//Girilen herhangi bir sayý için çarpým tablosu yapan program.

int main(){
	int i;
	int x;
	int y;
	printf("Bir sayi giriniz:");
	scanf("%d",&x);
	for(i=0;i<=10;i++){
		y=x*i;
		printf("%d\n",y);
	}
	return 0;
}
