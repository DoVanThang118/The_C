#include <stdio.h>
int main(){
	// input a
	int a;
	scanf("%d",&a);
	//input b
	int b;
	scanf("&d",&b);
	// so sanh a va b
	if (a>b){
		//display a la so lon nhat
		printf("a lon hon b");
	
	}else{
		if(a==b){
			printf("hai so bang nhau");
		}else{
			printf("b lon hon a");
		}
	}
}
