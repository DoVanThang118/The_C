#include<stdio.h>
int main(){
	int n;
	printf ("so luong so:");
	scanf ("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap so:");
		scanf("%d/n",&arr[i]);
	}
	int s=0;
	int c=0;
	float tb;
	// tinh trung binh cong so le
	for(int i=0;i<n;i++){
		if(arr[i]%2==1){
			s+=arr[i];
			c++;
		}
	}
	tb=s/float(c);
	printf("\ntrung binh cong cac so le la:%f",tb);
	//tinh trung binh cong so le trong vi tri chan
	int s1=0;
	int c1=0;
	float tb1;
	for(int i=0;i<n;i++){
		if(arr[i]%2==1&&i%2==1){
			s1+=arr[i];
			c1++;
		}
	}
	tb1=s1/float(c1);
	if(c1==0){
		printf("\n khong co so le o vi tri chan");
	}else{
		printf("\ntrung binh cong cac so le trong vi tri chan la:%f",tb1);
	}
	//nhap so x tim xem x cos trong n so khong
	int x;
	printf("\n nhap so x :");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		int c=0;
		if(arr[i]==x){
			printf("so x co trong mang");
			c++;
			break;
		}
    }
	if(c==0){
		printf("so x khong co trong mang");	
	}
	// tim so le cuoi cung
	for(int i=n-1;i>=0;i--){
		int c=0;
		if(arr[i]%2==1){
			printf("\nso le cuoi cung la : %d",arr[i]);
			c++;
			break;
		}
	}
	if(c==0){
		printf("\nkhong co so le");
	}
}
