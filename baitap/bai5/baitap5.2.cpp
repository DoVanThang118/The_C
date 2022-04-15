#include <stdio.h>
int main(){
	//nhap mang n so nguyen
	int n;
	printf("nhap kich thuoc mang:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf ("\n nhap so:");
		scanf ("%d",&arr[i]);
	}
	//tim so nguyen duong nho nhat
	int min;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			min=arr[i];
			break;
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]<min&&arr[i]>0){
			min=arr[i];
		}
	}
	printf("\n so nguyen duong nho nhat la: %d",min);
	// tim so luong cac so ngyuen duong lien tiep nhieu nhat
	int cmax=0;
	int c=0;
	for(int i=o;i<n;i++){
		
	}
}
