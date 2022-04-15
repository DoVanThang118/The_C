#include <stdio.h>
int main(){
	int n;
	printf ("nhap so: ");
	scanf ("%d",&n);
	int x;
	int max=0;
	while(n>0){
		x=n%10;
		if(x>max){
			x=max;
		}
		n=n/10;
	}
	printf("chu so lon nhat la: %d",max);
}
