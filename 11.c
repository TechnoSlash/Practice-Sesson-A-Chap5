#include<stdio.h>
int main(){
  char alphabet[2];
  int num1,num2,num=0;
  printf("Enter two letter of alphabets serially.(note:Only use uppercase for both or lowercase for both.)\n");
  scanf("%s",alphabet);
  num1=alphabet[1];
  num2=alphabet[0];
  if(num1>num2){
    num=num1-num2-1;
  }
  else if(num1<num2){
    num=num2-num1-1;
  }
  printf("The number of other alphabets between the given two alphabets is %d\n",num);
}