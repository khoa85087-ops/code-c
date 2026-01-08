#include "stdio.h"
int main(){
	float a1,b1,c1,a2,b2,c2;
	printf ("\nnhap vao cac he so a1,b1,c1:");
	scanf ("%f%f%f",&a1,&b1,&c1);
	printf ("\nnhap vao cac he so a2,b2,c2:");
	scanf("%f%f%f",&a2,&b2,&c2);
	float d=a1*b2-b1*a2;
	float dx=c1*b2-c2*b1;
	float dy=a1*c2-a2*c1;
	if (d==0){
		printf ("he pt vo nghiem:");
	}
	else if (d!=0){
		printf ("x=%f||y=%f",dx/d,dy/d);
	}
}