//nhap 1 mang n string sap xep mang theo thu tu alphabet (ascii)
#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("nhap so luong : ");
	scanf("%d",&n);
	char arrs[n][50];
	for(int i=0;i<n;i++){
    	printf("nhap : ");
    	scanf("%s",arrs[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(strcmp(arrs[j],arrs[j+1])>0){
				char temp[50];
				strcpy(temp,arrs[j]);
				strcpy(arrs[j],arrs[j+1]);
				strcpy(arrs[j+1],temp);
			}
		}
	}
	printf("sau khi sap sep : ");
	for(int i=0;i<n;i++){
		printf(" %s ",arrs[i]);
	}
}
