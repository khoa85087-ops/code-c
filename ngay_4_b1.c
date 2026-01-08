#include "stdio.h"
#include "math.h"
int main (){
	int a,b,c;
	float d,x;
	printf("nhap vao a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	d=pow(b,2)-4*a*c;
	if(d>0){
		float x1=(-b+sqrt(d))/(float)2*a;
		float x2=(-b-sqrt(d))/(float)2*a;
		printf ("x1=%.2f  x2=%.2f",x1,x2);		
	}
	else if (d==0){
		x=(float)(-b)/(float )2*a;
		printf("x=%.2f",x);
	}
	else {
		printf("pt vo nghiem ");
	}
}