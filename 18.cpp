#include <stdio.h>
//Sat�r say�s� d��ar�dan girilen floyd ��geni yapan program.
int main(){
	int i;
	int n;
	int j=1;
	int a=1;
	printf("Satir sayisini giriniz:");
		scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",a);
				a++;
		}
		printf("\n");
	}
	return 0;
}
