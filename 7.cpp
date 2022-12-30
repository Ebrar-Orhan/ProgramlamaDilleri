#include <stdio.h>
//1 ile n arasýndaki asal sayýlarý yazdýran program.
int main(){

	int i,j;
	int a;
	int n;
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
			printf("%d\n",i);
		}
	}
	return 0;
}
