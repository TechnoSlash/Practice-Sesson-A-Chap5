#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter three numbers-->(a,b,c). \n");
  scanf("%d%d%d",&a,&b,&c);//say 3,2,1
  if(a>b && a>c){
    if(c>b){
      printf("c");
    }
    else{
      printf("b");
    }
  }
  else if(b>a && b>c){
    if(c>a){
      printf("c");
    }
    else{
      printf("a");
    }
  }
  else{
    if(a>b){
      printf("a");
    }
    else{
      printf("b");
    }
    }
    printf(" is the second largest number\n");
    return 0;
}