#include <stdio.h>
int main(){
	int n;
	printf ("nhap so: ");
	scanf ("%d",&n);
	int s=0;
	while(n>0){
		s=s+n%10;
		n=n/10;
	}
	printf("tong cac chu so la: %d",s);
}
