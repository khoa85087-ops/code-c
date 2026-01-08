#include "stdio.h"
int main(){
	float a,b;
	printf("nhap vao hai so a va b");
	scanf("%f%f",&a,&b);
	if (a!=0){
		float x=(float)-b/(float)a;
		printf("nghiem cua pt la %.2f",x);
	}
	else {
		printf("pt vo nghiem ");
	}
	
}