#include <stdio.h>
int main(){
	int n;
	printf("nhap so:");
	scanf("%d",&n);
    n=n-1;
    int i=0;
	while(n>0){
		if((n%2==0)&&(n%3==0)){
			i++;
	        printf("so can tim la:%d",n);
	   	    break;
	   }
		n--;
	}
	if(i==0){
		printf("khong co so chia het cho 2 va 3!!!");
	}		
}
