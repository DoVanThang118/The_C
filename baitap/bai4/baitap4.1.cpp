#include <stdio.h>
int main(){
	int n;
	printf ("nhap so: ");
	scanf ("%d",&n);
	int s=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			printf("\n %d co uoc la : %d",n,i);
			s+=i;
		}
	}
	printf("\n tong cac uoc cua %d la: %d",n,s);
}
