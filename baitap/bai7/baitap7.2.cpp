//nhap 1 mang n string sau do nhap 1 string va tim kiem string co trong n string khong
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
	char s[50];
	printf("nhap chuoi can tim : ");
    scanf("%s",arrs);
    int count=0;
    for(int i=0;i<n;i++){
    	if(strcmp(arrs[i],s)==0){
    		printf ("found !!");
    		count++;
    		break;
		}
	}
	if(count==0){
		printf("NOT FOUND !!");
	}
}
