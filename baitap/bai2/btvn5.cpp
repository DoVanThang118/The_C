#include <stdio.h>
int main(){
	printf("ngay:");
	int ngay;
	scanf("%d",&ngay);
	printf("thang:");
	int thang;
	scanf("%d",&thang);
	if(ngay>=1&&ngay<=31){
		if(thang>=1&&thang<=12){
				switch(thang){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					ngay = 31;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					ngay = 30;
					break;
				case 2:
					ngay = 28;
					break;
				}
			return ngay	;
			printf("gia tri hop le");
		}else{
			printf("khong hop le");
		}
	}else{
		printf("khong hop le");
			}
}
