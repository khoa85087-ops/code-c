#include "stdio.h"
#include "math.h"
int main(){
	float xc,yc,r,xm,ym;
	printf("nhap vao tam duong tron");
	printf("\nxc:");
	scanf("%f",&xc);
	printf("\nyc:");
	scanf("%f",&yc);
	printf("nhap vao ban kin duong tron");
	printf("\nr:");
	scanf("%f",&r);
	printf("nhap vao toa do m");
	printf("\nxm:");
	scanf("%f",&xm);
	printf("\nym:");
	scanf("%f",&ym);
	float s=pow(xm-xc,2)+pow(ym-yc,2)-pow(r,2);
	if (s<0){
		printf("diem m nam trong duong tron ");
	}
	else if  (s==0){
		printf("diem m nam tren duong tron ");
	}
	else {
		printf("diem m nam ngoai duong tron ");
	}
}