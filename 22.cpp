#include <stdio.h>
//100 ile 200 aras�ndaki 9'a tam b�l�nen say�lar� ve toplam�n� yazd�ran program.
int main(){
	int toplam=0;
	int i;
	for(i=100;i<=200;i++){
		if(i%9==0){
			printf("%d\n",i);  
			toplam+=i;                                    
		}
	}
	
printf("toplam:%d",toplam);
return 0;
}
