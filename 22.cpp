#include <stdio.h>
//100 ile 200 arasýndaki 9'a tam bölünen sayýlarý ve toplamýný yazdýran program.
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
