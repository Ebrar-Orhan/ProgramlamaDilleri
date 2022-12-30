#include <stdio.h>
//Pascal üçgenini n satýrda yazdýran program.
int main(){ 
 int a,b,c,d,e; 
     printf("Bir sayi giriniz: ");
		scanf("%d",&a);
 printf("\n"); 
	for (int b = 0; b < a; b++) 
 {
 		int c = 1;
 			for (int d = 0; d < a - b; d++)
 {
 			printf(" ");
 }
 			for (int e = 0; e <= b; e++)
 {
 			printf(" %d ", c); 
 c = c * (b - e) / (e + 1);
 }
	printf("\n");
 }

return 0;
}

