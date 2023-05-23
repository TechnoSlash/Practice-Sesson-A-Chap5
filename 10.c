#include<stdio.h>
#include<string.h>
int main(){
  char letter;
  puts("Enter a letter in order to swap uppercase to lowercase and vice versa.\n");
  gets(&letter);
    if(letter<='z' && letter>='a'){
      letter-=32;
    }
    else if(letter<='Z' && letter>='A'){
    letter+=32;
    }
  printf("After processing the letter is %c.\n",letter);
}