
#include <stdio.h>

int main(void) {
  char in_str[5]=" ";
  char out_str[5]=" ";
  int i=0;
  int j=4;
  scanf("%s",in_str);
  for(i=0;i<5;i++){
    out_str[j]=in_str[i];
    j--;
  }
  printf("%s",out_str);
  return 0;
}

//단어입력 -> 
