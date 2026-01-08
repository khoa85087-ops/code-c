#include "stdio.h"
int rank(int a[],int b[],int x,int y,int n);
int main (){
	int w;int n;int   s=0;
	printf("nhap vao khoi luong tui:");
	scanf ("%d",&w);
	printf ("nhap vao so luong thuc pham:");
	scanf("%d",&n);
	int a[n];int b[n];int i=0;int m=0;float c[n];
	int k=n;int j;
	while (k>=1){
		printf ("nhap vao khoi luong vat pham %d:",i+1);
		scanf ("%d",&a[i]);
		printf ("nhap vao gia tien vat pham %d:",i+1);
		scanf ("%d",&b[i]);
		i++;
		k--;		
	}
	

	j=1;

	back:
	for (i=0;i<n;i++){
		if (rank(a,b,a[i],b[i],n)==j){
			if (w>a[i]+m){
				m=m+a[i];
				printf ("\nta lay %d ky tui %d;",a[i],i+1);
				c[i]=((float )b[i])/(a[i]);
				s=s+a[i]*c[i];
				j++;
				goto back;
			}
			else {
				int m_1=w-m;
				c[i]=((float )b[i])/(a[i]);	
				s=s+m_1*c[i];	
				printf("\nta lay %d ky tui thu %d",m_1,i+1);
			}
		}
	}
printf ("\ntong tien la :%d",s);

	

}
int rank(int a[],int b[],int x,int y,int n){
	float c[n];int i;int j;
	for (i=0;i<n;i++){
	  c[i]=((float )b[i])/(a[i]);
}
for (i=0;i<n-1;i++){
	for (j=i+1;j<n;j++){
		if (c[i]<c[j]){
			float  change =c[i];
			c[i]=c[j];
			c[j]=change;
		}
	}
}
	float h=((float)y)/((float)x);
	for(i=0;i<n;i++){
		if (h==c[i]){
			return i+1;
		}
		
}
}


