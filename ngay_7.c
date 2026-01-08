#include "stdio.h"
#include <stdlib.h>
int main(){
	char x;

	

					
			char y;			char s;int n=100;int z=105;int i;
					char mc;int may=0;int nguoi=0;
	
	
while (y!='0')	{

	printf ("\nnhap vao bao(b) da(d) keo(k):");

int ran=100;
while (ran>=100){
	 ran =rand();
}

	scanf ("%c",&s);


	char a= 'b'; char b='d';char c='k';
	if (ran<30){
		 mc=a;
		 if (s=='b'){
		 	printf ("\nbao-bao||hoa||nguoi %d-may %d",nguoi,may);
		 	
		 }
		 else if (s=='d'){
		 	nguoi++;
		 	printf ("\nbao-da||thang||nguoi %d-may %d",nguoi,may);
		 }
		 else if (s=='k'){
		 	may++;
		 	printf ("\nbao-keo||thua||nguoi %d-may %d",nguoi,may);
		 }
	}
	else if (ran<=60&&ran>=30){
		 mc=b;
		 if (s=='d'){
		 	printf ("\nda-da||hoa||nguoi %d-may %d",nguoi,may);
		 }
		 else if (s=='k'){
		 	nguoi++;
		 	printf ("\nkeo-da||thang||nguoi %d-may %d",nguoi,may);
		 }
		 else if (s=='b'){
		 	may++;
		 	printf ("\nbua-da||thua||nguoi %d-may %d",nguoi,may);
		 }
	}
	else if (ran<90&&ran>60){
		mc=c;
		 if (s=='k'){
		 	printf ("\nkeo-keo||hoa||nguoi %d-may %d",nguoi,may);
		 }
		 else if (s=='b'){
		 	nguoi++;
		 	printf ("\nbua-keo||thang||nguoi %d-may %d",nguoi,may);
		 }
		 else if (s=='d'){
		 	may++;
		 	printf ("\nda-keo||thua||nguoi %d-may %d",nguoi,may);
		 }
	}
	
	
	
	getchar;
	scanf ("%c",&y);
}
}
