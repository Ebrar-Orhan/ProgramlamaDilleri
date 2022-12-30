#include <stdio.h>
//1 ile n arasýndaki sayýlardan mükemmel sayý olanlarýný bulan program.
int main(){
	int i,j;
	int toplam=0;
	int n;
	printf("Bir n sayisi giriniz:");
		scanf("%d",&n);
	for(i=1;i<n;i++){
		toplam=0;
	
	for(j=1;j<i;j++){
		if(i%j==0){
		
		toplam+=j;
	}
	}
	if(toplam==i){
	
	printf("%d\n",toplam);
}
}
	return 0;
}

