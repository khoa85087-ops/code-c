#include "stdio.h"
int main (){
	int ngay,thang,nam;int sum ;
	printf ("nhap vao ngay thang nam:");
	scanf ("%d%d%d",&ngay,&thang,&nam);
	sum =(int)(30.42*(thang-1))+ngay ;
	int check =(nam%4==0&&nam%100!=0||nam%400==0);
	if (thang==2||check==1&&thang>2){
		sum++;
	}
	 if (thang>2&&thang<8){
		sum--;
	}
	printf ("ngay thu :%d",sum);
	
}