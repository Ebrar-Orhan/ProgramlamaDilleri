#include <stdio.h>
//Bir sayýnýn mükemmel sayý olup olmadýðýný kontrol eden program.
int main(){
	int x;
	int toplam=0;
	int i;
	printf("Bir sayi giriniz:");
		scanf("%d",&x);
		
	for(i=1;i<x;i++){
		if(x%i==0){
			toplam+=i;
		}
	}
		if(toplam==x){
		
	
			printf("%d bir mukemmel sayidir.\n",x);
	}
	else 
	{
		printf("%d bir mukemmel sayi degildir.\n",x);
	}
	
	return 0;
}
