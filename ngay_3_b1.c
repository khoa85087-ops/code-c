#include "stdio.h"
#include "math.h"
int main (){
	float xa,ya,xb,yb,xc,yc,xm,ym;
	printf("diem a:");
	scanf("%f",&xa);
	scanf("%f",&ya);	
	printf("\ndiem b:");
	scanf("%f",&xb);
	scanf("%f",&yb);	
	printf("\ndiem c:");
	scanf("%f",&xc);
	scanf("%f",&yc);	
	printf("\ndiem m");
	scanf("%f",&xm);
	scanf("%f",&ym);	
	float sacb=((float)1/(float)2)*abs(xa*yb-xb*ya+xb*yc-xc*yb+xc*ya-xa*yc);
	printf("\n%f",sacb);
	float sabm=((float)1/(float)2)*abs(xa*yb-xb*ya+xb*ym-xm*yb+xm*ya-xa*ym);
	printf("\n%f",sabm);	
	float sbmc=((float)1/(float)2)*abs(xc*yb-xb*yc+xb*ym-xm*yb+xm*yc-xc*ym);
	printf("\n%f",sbmc);	
	float samc=((float)1/(float)2)*abs(xc*ya-xa*yc+xa*ym-xm*ya+xm*yc-xc*ym);
	printf("\n%f",samc);
	if (sacb<sabm+sbmc+samc){
		printf("diem m nam ngoai");
	}
	else if (sacb==sabm+sbmc+samc){
		if (sabm!=0&&sbmc!=0&&samc!=0)
		printf("diem m nam trong ");
		else{
			printf("\ndiem m nam tren");
		}
	}
}