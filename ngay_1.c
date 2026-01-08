#include "stdio.h"
#include <math.h>
///nhap vao s tinh ra_ s=4*pi*r^2 v =4/3 pi*r^3
int main(){
	printf("nhap vao dien tich ");
	float s;float  r;
	scanf("%f",&s);
	r=sqrt((s)/(3.14*4));
	 float v=((float)4/3)*3.14*pow(r,3);
	printf("the tich cua hinh la %.2f",v);
	
}