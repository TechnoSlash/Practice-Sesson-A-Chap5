#include<stdio.h>
#include<string.h>
int main(){
  char word[45];
  int i,n;
  printf("Enter a word in order to swap uppercase to lowercase and vice versa.\n");
  scanf("%s",word);
  n=strlen(word);
  for(i=0;i<n;i++){
    if(word[i]<='z' && word[i]>='a'){
      word[i]-=32;
    }
    else if(word[i]<='Z' && word[i]>='A'){
    word[i]+=32;
    }
  }
  printf("After processing the word is %s",word);
}