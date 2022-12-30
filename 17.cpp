#include <stdio.h>
// 1+1/2+1/3+1/4+.......+1/n iþlemini girilen n deðerine göre hesaplayan program.
int main(){
	float toplam=0;
	float i;
	float x;
	int n;
	printf("Bir sayi giriniz:");
		scanf("%d",&n);
	for(i=1;i<=n;i++){
		x=1/i;
		toplam+=x;
	}
	printf("Toplam=%f",toplam);
		return 0;
}
