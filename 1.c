#include<stdio.h>
int main(){
  char gender[10];
  printf("Enter your gender. \n");
  scanf("%s",gender);
  if(gender[0]=='M' || gender[0]=='m'){
    printf("Your gender is male.\n");
  }
  else if(gender[0]=='F' || gender[0]=='f'){
    printf("Your gender is female.\n");
  }
  else{
    printf("Invalid input or your gender was not male or female.\n");
  }
  return 0;
}