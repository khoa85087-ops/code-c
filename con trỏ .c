#include "stdio.h"
int main (){
	int n=5;
	// khai báo con trỏ p trỏ tới n 
	int *p=&n;
	// in ra giá trị con trỏ p trỏ tới 
	printf("%d", *p);
	// in ra địa chỉ con trỏ p trở tới 
	printf ("\n%d ",p);
	// con trỏ trỏ tới array 
	int a[]={1,2,4,5,};
	int *khoa=a;
	printf ("\n%d ",*(khoa+1) );
}
