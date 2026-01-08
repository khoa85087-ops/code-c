#include "stdio.h"
#include "math.h"
int main(){
	int x;
	printf ("nhap vao so do theo phut ");
	scanf("%d",&x);
	
	float d=floor(x/60);
	float du =x%60;
	float giua=du/60;
	float d1=M_PI*d/(float)180;
	float d2=M_PI*giua/(float)180;
	float rad=d1+d2;
	if (rad<M_PI/2){
		printf("day la goc phan tu thu nhat ");
		printf ("%f",cos(rad));
	}
	else if (rad<M_PI){
		printf("day la goc phan tu thu hai ");
		printf ("%f",cos(rad));
	}
	else if (rad<3*M_PI/2){
		printf("day la goc phan tu thu ba ");
		printf ("%f",cos(rad));
	}	
	else if (rad<M_PI*2){
		printf("day la goc phan tu thu tu ");
		printf ("%f",cos(rad));
	}
}