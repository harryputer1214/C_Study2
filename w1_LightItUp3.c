#include <stdio.h>

int main(void) {
  int num[ ]={5, 2, 6, 7, 8, 9, 4, 3, 1};
  int page[10]={123, 57, 67, 86};
  int i, j;

  for(i=0;i<9;i++){
    printf("num[%d]: %d\n",i,num[i]);
  }

  printf("\n");

  for(i=0;i<10;i++){
    printf("page[%d]: %d\n",i,page[i]);
  }
  return 0;
}

//w1_LightItUp3 다음 프로그램을 작성하고 아래에서 의견을 나눈 후 빈칸을 채워 봅시다.
