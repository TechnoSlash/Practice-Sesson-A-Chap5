#include<stdio.h>
int main(){
  int year;
  printf("What is the year you want to check for leap year? \n");
  scanf("%d",&year);
  printf("%d A.D. ",year);
  if (year%4){
    printf("is not a leap year.\n");
  }
  else if(year%100){
    printf("is a leap year.\n");
  }
  else if(year%400){
    printf("is not a leap year.\n");
  }
  else{
    printf("is a leap year.\n");
  }
}