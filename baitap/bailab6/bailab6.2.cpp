#include <stdio.h>
int main(){
	int n;
	printf("Nhap n="); 
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d: ",i);
	    scanf("%d",&arr[i]);
	    for(int k=0;k<i;k++){
	   	    for(int j=0;j<i-k;j++){
	        	if(arr[j]>arr[j+1]){
	        		int tmp = arr[j];
	        		arr[j]=arr[j+1];
	        		arr[j+1]=tmp;
		    	}
	    	}   
        }
	    printf("mang gia tri thu duoc la:\n");
    	for(int j=0;j<=i;j++){
	    	printf("%5d",arr[j]);
    	}
    	printf("\n");
	}
}
