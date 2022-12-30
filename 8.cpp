#include <stdio.h>
//1 ile n arasýndaki asal sayýlarýn toplamýný bulan yazdýran program.
int main(){
	int i,j;
	int a;
	int n;
	int toplam=0;
	printf("Bir n sayisi giriniz:");
		scanf("%d",&n);
	for(i=1;i<=n;i++){

		a=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				a=0;
				break;
			}
		}
		if(a==1){
		toplam=toplam+i;
}
     }
	toplam=toplam-1;
	printf("%d\n",toplam);
	return 0;
}

