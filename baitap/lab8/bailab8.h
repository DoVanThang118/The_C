#include <math.h>
// tong cac chu so cua 1 so nguyen
int tongCacChuSo(int n){
	int m=0;
	while(n!=0){
		m=m+n%10;
		n=n/10;
	}
	return m;
}

// chu vi tam giac
int chuViTamGiac(int a,int b,int c){
	if(a+b<=c&&b+c<=a&&c+a<=b) return false;
	int s;
	s = a+b+c;
    return s;
}

// dien tich tam giac
int dienTichTamGiac(int a,int b,int c){
	int p = chuViTamGiac(a,b,c)/2;
	int S = sqrt(p*(p-a)*(p-b)*(p-c));
	return S;
}

// uoc chung lon nhat
int UCLL(int a,int b){
	while(a!=b){
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}
	}
	return a;
}

//boi chung nho nhat
int BCNN(int a,int b){
	int BCNN = (a*b)/UCLL(a,b);
	return BCNN;
}
