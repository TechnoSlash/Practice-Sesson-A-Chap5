#include<stdio.h>
int main(){
  int a,b,c,rootCheck;
  printf("enter a,b and c of your quadratic equation.\n");
  scanf("%d%d%d",&a,&b,&c);
  rootCheck=b*b-4*a*c;
  if(rootCheck>0){
    printf("The roots are real and different.\n");
  }
  else if(rootCheck==0){
    printf("The root is real and same.\n");
  }
  else{
    printf("The roots are imaginary and different.\n");
  }
  
}