#include <stdio.h>

int main(void) {
  char in_str[200]=" ";
  char out_str[200]=" ";
  int i=0;
  int j=200;
  scanf("%c",in_str);
  for(i=0;i>=200;i++){
    out_str[j]=in_str[i];
    j--;
  }
  printf("%c",out_str);
  return 0;
}

//왜 안돼지?
//아.. 못하겠다..
