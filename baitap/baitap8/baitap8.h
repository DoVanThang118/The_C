#include <math.h>
// ham tinh S = x^y
float tinhLuyThua(float x,int y){
	if(x!=0){
		float s=1;
	    if(y>0){
	    	for(int i=0;i<y;i++){
	    		s*=x;
	    	}
	    	return s;
    	}
    	if(y<0){
    		for(int i=0;i<-y;i++){
    			s = (s*x);
    		}
    		return 1/s;
    	}
	}
	return 0;
}
//kiem tra so nguyen to
bool ktSNT(int n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0)
			return false;
	}
	return true;
}

// tim so lon nhat
int timMax(int arr[],int n){
	int max=arr[0];
    for(int i=1;i<n;i++){
		if(arr[i]>max){
	    max = arr[i];
	    }	    
	}
	return max;
}

// tim so nho nhat
int timMin(int arr[],int n){
	int min=arr[0];
    for(int i=1;i<n;i++){
   	    if(arr[i]<min){
	   	    min = arr[i];
	   	}	    
	}
	return min;
}

// tim so nguyen to nho nhat nhung lon hon moi gia tri nhap vao
int timSNTNNLonHonMoiGiaTriTrongMang(int arr[],int n){
   int max = timMax(arr,n)+1;
    while(ktSNT(max)!=true){
    	max++;
	}
    return max;
}

// tim uoc chung lon nhat cua mang
bool ktUocChung(int arr[],int n,int UocChung){
	for(int i=0;i<n;i++){
		if(arr[i]%UocChung!=0){
			return false;
		}
	}
	return true;
}
int UCLNCuaMang(int arr[],int n){
	int min = timMin(arr,n);
	for(int UocChung = min;UocChung>0;UocChung--){
		if(ktUocChung(arr,n,UocChung)==true){
			return UocChung;
		}
	}
	return 1;
}

// tim boi chung nho nhat cua mang
int BCNNCuaMang(int arr[],int n){
	int bcnn = timMax(arr,n);
	int max = bcnn;
	for(int i=0;i<n;i++){
		if(bcnn%arr[i]!=0){
			bcnn=max+bcnn;
			i=-1;
		}
	}
	return bcnn;
}



