#include <stdio.h>
#include <math.h>
int main (){
	int n;
	printf("nhap so: ");
	scanf("%d",&n);
	int s=0;
	while(n!=0){
		s*=10;
		n%10;
		s+=(n%10);
		n/=10;	
	}
	printf("so sao nguoc la:%d",s);
}
