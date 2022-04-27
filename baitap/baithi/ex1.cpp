#include<stdio.h>
int main(){
  int n;
  float S;
  S = 0;
  do
  {
    printf("nhap n: ");
    scanf("%d", &n);
    if(n < 1)
    {
      printf("\nso nhap vao phai >=1 ; vui long nhap lai !\n");
    }
  }while(n < 1);
  for(int i = 1; i <= n; i++){
    S = S + 1.0 / i;
  }
  printf("\nS = 1 + 1/2 + ... + 1/%d là: %.2f",n, S);
  printf("\n-----------------------------------------------------\n");
}
