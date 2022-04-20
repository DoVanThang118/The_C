#include <stdio.h>
int main(){
	int a,b;
	printf("nhap so a :");
	scanf("%d",&a);
	printf("nhap so b :");
    scanf("%d",&b);
    int UCLN;
    int BCNN=a*b;
    if(a==0||b==0){
    	UCLN=a+b;
	}else{
    	while(a!=b){
    		if(a>b){
    			a=a-b;
			}
			else{
				b=b-a;
			}
		}
		UCLN=a;
	}
	printf("\n ucln= %d",a);
	BCNN=BCNN/a;
	printf("\n bcnn= %d",BCNN);
}
