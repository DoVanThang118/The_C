#include <stdio.h>
int main (){
	int n;
	printf("nhap so: ");
	scanf("%d",&n);
	int i=1;
	printf("cac so le nho hon so da cho la:%d;",i);
	while(i<n){
		i+=2;
		printf("%d;",i);
	}
}
