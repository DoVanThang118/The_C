#include <stdio.h>
int main(){
	//input num
	int num;	
	scanf("%d",&num);
	//r=num % 2
	int r;
	r=num%2;
	// kim tra r==0
	if(r==0){
		//yes
		// display num la so chan
		printf("num la so chan");
		
	}else{
		//no
		//display num la so le
		printf("num la so le");
	
	}
	//stop
}
