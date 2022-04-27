#include <stdio.h>
void reverseArray(int arr[],int n){
	int start = 0;
	int end = n-1;
	while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void Nhap(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("nhap arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
}
void Xuat(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%5d",arr[i]);
    }
}
int main(){
	int n;
	printf("nhap so luong phan tu: ");
	scanf("%d",&n);
	int arr[n];
	Nhap(arr,n);
	printf("mang nhap vao:\n");
	Xuat(arr,n);
	reverseArray(arr,n);
	printf("\nmang dao nguoc la:\n");
	Xuat(arr,n);
}
