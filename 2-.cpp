#include <stdio.h>
#include <math.h>
//a*x^2+b*x+c=0 denkleminin köklerini hesaplayan program.
int main(){
	int x;
	int a;
	int b;
	int c;
	int denklem=a*x*x+b*x+c;
	int delta;
	int x1;
	int x2;
	printf("a:");
    scanf("%d",&a);
	printf("b:");
    	scanf("%d",&b);
	printf("c:");
		scanf("%d",&c);

	delta=b*b-(4*a*c);
	if(delta>0){
	
	  x1=((-b+sqrt(delta))/2*a);
	  x2=((-b-sqrt(delta))/2*a);
	printf("x1=%d\n",x1);
	printf("x2=%d",x2);
}
	else if (delta<0){
	
	printf("Gercek kok yokrur!");}
	 else{
	
	x1=-b/2*a;
	x1=x2;
	printf("x1=%d",x1);
}
	return 0;
	  
}
