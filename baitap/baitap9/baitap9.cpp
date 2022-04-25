#include <stdio.h>
#include <string.h>
void menu(){
	printf("\n Ban co muon sap xep danh sach ten theo thu tu ALPHABE khong ??");
	printf("\n 1 . yes!!!");
	printf("\n 2 . no !!!");
	printf("\n---------------");
	printf("\n Chon: ");
}
char sapXepTen(char *arrs[100],int n){
	for(int i=0;i<n-1;i++){
    	for(int j=0;j<n-1-i;j++){
   			if(strcmp(arrs[j],arrs[j+1])>0){
   				char temp[100];
   				strcpy(temp,arrs[j]);
   				strcpy(arrs[j],arrs[j+1]);
    			strcpy(arrs[j+1],temp);
    		}
   		}
   	}
}
int main(){
	int n,m;
	printf("Nhap so luong sinh vien:");
	scanf("%d",&n);
	printf("Nhap ten sinh vien:\n");
	char arrs[n][100];
	for(int i =0;i<n;i++){
		printf("%d . ",i+1);
		scanf("%s",arrs[i]);
	}
	do{
		menu();
		scanf("%d",&m);
		switch(m){
			case 1:{
				for(int i=0;i<n-1;i++){
            	for(int j=0;j<n-1-i;j++){
   	    		if(strcmp(arrs[j],arrs[j+1])>0){
   	    			char temp[100];
   	    			strcpy(temp,arrs[j]);
   	    			strcpy(arrs[j],arrs[j+1]);
        			strcpy(arrs[j+1],temp);
             		}
   	        	}
        	}
				printf("\nsau khi sap sep : ");
            	for(int i=0;i<n;i++){
	            	printf("\n %d . %s ",i+1,arrs[i]);
	            }
				break;
			}
		}
	}while(m!=2);
}
