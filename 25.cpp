#include <stdio.h>
int main(){
	int x;
	int y;
	int z;
	printf("x:",x);
	scanf("%d",&x);
		printf("y:",y);
		scanf("%d",&y);
		z=x%y;
		while(z!=0){
			x=y;
			y=z;
			z=x%y;
		}
			printf("HCF=%d",y);
			return 0;
		
}
