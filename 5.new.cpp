#include <stdio.h>
//2^4 i�lemini yapan program.
int main(){
	int x=2;
	int i;
 	int toplam=1;
 	for(i=1;i<=4;i++){
 		toplam*=x;
	 }
	 printf("Cevap:%d",toplam);
	 return 0;
}
