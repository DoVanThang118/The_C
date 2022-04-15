#include <stdio.h>
int main(){
	int n;
	printf ("nhap so: ");
	scanf ("%d",&n);
	while(n>10){
		n=n/10;	
	}
	printf("chu so dau tien la: %d",n);
}
