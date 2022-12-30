#include <stdio.h>
//1+11+111+..... n terimli dizinin toplamýný bulan program.
int main(){
	int n;
	int toplam=0;
	int i;
	int a=1;
	printf("Bir sayi giriniz:");	
		scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("%d",a);
	if(i<n){
		printf("+ ");
		}
	toplam+=a;
	a=(a*10)+1;
	
			
		}
		printf("=%d",toplam);
		return 0;
		
	}
	

