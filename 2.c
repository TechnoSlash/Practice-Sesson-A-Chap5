#include<stdio.h>
int main(){
  int num;
  printf("Enter your number. \n");
  scanf("%d",&num);
  if(num%5==0 && num%11!=0){
    printf("This number is exactly divisible by 5 but not by 11.\n");
  }
  else{
    printf("This number is not divisible by 5 or this number is divisible by 11.\n");
  }
  return 0;
}