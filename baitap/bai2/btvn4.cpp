#include <stdio.h>
int main(){
	printf("nhap gia tri:_");
	int a;
	scanf("%d",&a);
	if(a>=2&&a<=8){
		if(a==8){
			printf("day la chu nhat");
		}else{
	        printf("day la thu: %d ",a);
    	}
	}else{
			printf("day khong phai ngay trong tuan");
	}
}
