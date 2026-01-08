#include "stdio.h"
int main(){
	int ngay,thang,nam;
	printf ("nhap vao ngay thang nam:");
	scanf ("%d%d%d",&ngay,&thang,&nam);
	switch(thang){
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			if (ngay<31) ngay++;
			else if (ngay==31){
				ngay=1;
				thang++;
				if (thang==13){
					thang=1;
					nam++;
				}
			}
		case 4:case 6:case 9:case 11:
			if (ngay<30) ngay ++;
			else if (ngay==0){
				ngay =1;
				thang++;
				if (thang==13){
					thang=1;
					nam ++;
				}
				
			}
		case 2:
			if (nam%4==0&&nam%100!=0||nam%400==0){
				if (ngay<29){
					ngay++;
				}	
				else if (ngay==29){
					ngay =1;
					thang++;
					if (thang==13){
						thang=1;
						nam++;
					}
				}
				}
			else {
				if (ngay<28){
					ngay++;
				}	
				else if (ngay==29){
					ngay =1;
					thang++;
					if (thang==13){
						thang=1;
						nam++;
					}
				}
			}
			
	}
	
	printf ("\nngay sau hom do la :%d/%d/%d",ngay,thang,nam);
	
	printf ("\n (ngay truoc )nhap vao ngay thang nam:");
	scanf ("%d%d%d",&ngay,&thang,&nam);
	switch(thang){
		case 5:case 7:case 10:case 12:
			if (ngay>1) ngay--;
			else if (ngay==1){
				ngay=30;
				thang--;
				if (thang==0){
					thang=1;
					nam--;
				}
			}
		case 2:case 4:case 6:case 8:case 9:case 11:case 1:
			if (ngay>1) ngay --;
			else if (ngay==1){
				ngay =31;
				thang--;
				if (thang==0){
					thang=12;
					nam --;
				}
				
			}
		case 3:
			if (nam%4==0&&nam%100!=0||nam%400==0){
				if (ngay>1){
					ngay--;
				}	
				else if (ngay==1){
					ngay =29;
					thang--;
					if (thang==0){
						thang=12;
						nam--;
					}
				}
				}
			else {
				if (ngay>1){
					ngay--;
				}	
				else if (ngay==1){
					ngay =28;
					thang--;
					if (thang==0){
						thang=12;
						nam--;
					}
				}
			}
			
	}	
	
	printf ("\nngay truoc hom do la :%d/%d/%d",ngay,thang,nam);	
	
	
}