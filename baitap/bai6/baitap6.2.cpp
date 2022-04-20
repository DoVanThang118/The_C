// nhap mang n so nguyen va 1 so nguyen x 
#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf ("nhap n: ");
	scanf ("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf ("nhap: ");
		scanf ("%d",&arr[i]);
	}
	
	int x;
	printf ("nhap so nguyen x : ");
	scanf ("%d",&x);
	// hay tim gia tri trong mang cac so nguyen gan gia tri x nhat
	int min=abs(arr[0]-x);
	for(int i=1;i<n;i++){
		if(abs(arr[i]-x)<min){
			min= abs(arr[i]-x);
		}
	}
	for(int i=0;i<n;i++){
		if(abs(arr[i]-x)==min){
        	printf("gia tri trong xa gia tri x nhat la: %d\n",arr[i]);
    	}
	}
}
