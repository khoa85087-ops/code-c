#include "stdio.h"
#include "math.h"
int main(){
	float ab; float x_a;float x_b;float y_a;float y_b;
	printf ("nhap vao toa do cua a :");
	printf("\nx_a");
	scanf("%f",&x_a);
	printf("\ny_a");
	scanf("%f",&y_a);
	printf ("nhap vao toa do cua b :");
	printf("\nx_b");
	scanf("%f",&x_b);
	printf("\ny_b");
	scanf("%f",&y_b);
	ab=sqrt(pow(x_b-x_a,2)+(pow(y_b-y_a,2)));
	printf("\ndo dai doan ab la %.2f",ab);	
	
}