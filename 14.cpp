#include <stdio.h>
int main(){
	int n;
	int fact = 1 ;
	printf("Sayi giriniz:");
	scanf("%d",&n);
	while(n!=0) {
	
		fact=fact*n;
		n--;
	}
	printf("%d",fact);
	return 0;
}
