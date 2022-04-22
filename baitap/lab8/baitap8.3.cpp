#include <stdio.h>
#include "baitap8.h"
int main(){
	int n;
	printf ("nhap so luong:");
	scanf ("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf ("nhap:");
		scanf ("%d",&arr[i]);
	}
	printf ("so can tim la : %d",UCLNCuaMang(arr,n));
}
