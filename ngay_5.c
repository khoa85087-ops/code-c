#include "stdio.h"
#include "math.h"
int mu(int m,int b);
int main (){
	int x;int x1,x2,x3,x4,x5,x6,x7,x8,x9;
	float a,b,c,d,e,f,g,h,k;
	printf ("nhap vao so sin:");
	scanf ("%d",&x);
	int i;
	for(x9=0;x9<=9;x9++){
		for(x8=0;x8<=9;x8++){
			for(x7=0;x7<=9;x7++){
				for(x6=0;x6<=9;x6++){
					for(x5=0;x5<=9;x5++){
						for(x4=0;x4<=9;x4++){
							for(x3=0;x3<=9;x3++){
								for(x2=0;x2<=9;x2++){
									for(x1=0;x1<=9;x1++){
	if (x1+x2*mu(10,1)+x3*mu(10,2)+x4*mu(10,3)+x5*mu(10,4)+x6*mu(10,5)+x7*mu(10,6)+x8*mu(10,7)+x9*mu(10,8)==x){
 a=x1; b=x2; c=x3; d=x4;e=x5;f=x6;
 g=x7;h=x8; k=x9;


	} 	
									}
								}
							}
						}
					}
				}
			}
		}
	}

		int  s_1=k+g+e+c;
		int  khoa=pow(b,2);
		int  nhu=pow(d,2);
		int pa=pow(f,2);
		int  hn=pow(h,2);
if (khoa>10){
	khoa=khoa%10;
	khoa++;
}
if (nhu>10){
	nhu=nhu%10;
	nhu++;
}
if (pa>10){
	pa=pa%10;
	pa++;
}
if (hn>10){
	hn=hn%10;
	hn++;
}
int s_2=khoa+nhu+pa+hn;
int s=s_1+s_2+x1;
if (s%10==0){
	printf("\nday la so sin hop le ");
}
else {
	printf("\nday la so sin khong hop le ");
}


}
int mu(int m,int b){
	int i ;int tich=1; 
	for(i=1;i<=b;i++){
		tich=m*tich; 
	}
	return tich;
}