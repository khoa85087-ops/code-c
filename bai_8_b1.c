#include "stdio.h"
int main (){
	printf ("nhap vao ngay thang nam :");
	int ngay,thang,nam;int check =0;int j;int i;int x;int y;
	int k;int l;
	scanf ("%d%d%d",&ngay,&thang,&nam);
	if (nam>=0&&ngay>0&&thang>0){
		if (thang<=12){
		switch (thang){
		case 1:case 3: case 5:case 7:case 8:case 10:case 12:
			if (ngay>31) check++; 
			break;
		case 4:case 6:case 9:case 11:
			if (ngay>30) check ++;
			break;				
		case 2:
			if (nam%4==0&&nam%100!=0||nam%400==0){
					if (ngay>29) check ++;
				}
				else {
					if (ngay>28) check ++;
				}	




			fff
			break;			
		
					
		}



		
	}
	}
	if(check==0){
		printf ("day la ngay hop le ");
	}
	else {
		printf("day la ngay khong hop le");
	}

	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			for (k=0;k<10;k++){
				for (l=0;l<10;l++){
					if (l+k*10+j*100+i*1000==nam) goto out;
				}
			}

	}
}
out:
	x=i*10+j;
	y=k*10+l;
	printf ("\n    %d   %d",x,y);
	if (check==0){

	float h=(ngay+((13*(thang+1))/(5))+y+(y/4)+(x/4)+5*x)%7;
	printf ("\nhom do la  thu %f",h);		
		}	
}
