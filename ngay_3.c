#include "stdio.h"
#include "math.h"
int main (){
	float a,b,c;
	printf("nhap vao canh a:");
	scanf("%f",&a);
	printf("\nnhap vao canh b:");
	scanf("%f",&b);
	printf("\nnhap vao canh c:");
	scanf("%f",&c);
	float p=(a+b+c)/(float)2;
	float s=sqrt(p*(p-a)*(p-b)*(p-c));
	if (a==b==c){
		printf("\nday la tam giac deu");
		
	}
	else if (a==b||b==c||a==c){
		printf("\nday la tam giac can");
	}
	else if (a*a+b*b==c*c){
		printf("\nday la tam giac vuong ");
	}
	else{
		printf("\nday la tam giac thuong");
	}
	printf("dien tich cua tam giac la :%.2f",s);
}