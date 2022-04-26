#include <stdio.h>
int main (){
	int n;
	printf("nhap so luong mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		bool f;
		do{
			f = false;
			printf("Nhap pt thu %d: ",i);
			scanf("%d",&arr[i]);
			for(int j=0;j<i;j++){
				if(arr[j] == arr[i]){
					f = true;
					printf("So nay da ton tai, vui long nhap lai\n");
					break;
				}
			}
		}while(f);

	}
	printf("\n mang gia tri thu duoc la:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
