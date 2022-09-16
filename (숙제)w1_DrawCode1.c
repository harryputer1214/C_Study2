#include <stdio.h>

int main(void) {
  int ar[10];
  int br[ ]={1, 2, 3, 4, 5};
  double dr[20];
  int i;

  printf("(1) 위 프로그램에서 배열의 메모리 용량을 출력해 봅시다.\n");
  printf("ar: %d\n", sizeof(ar));
  printf("br: %d\n", sizeof(br));
  printf("dr: %d\n", sizeof(dr));
  printf("\n\n");

  printf("(2) 위 프로그램에서 배열 요소의 메모리 용량을 출력해 봅시다.\n");
  for(i=0; i<10; i++)  {
    printf("ar[%d]: %d\n", i, sizeof(ar[i]));
  }
  for(i=0; i<5; i++)  {
    printf("br[%d]: %d\n", i, sizeof(br[i]));
  }
  for(i=0; i<20; i++)  {
    printf("dr[%d]: %d\n", i, sizeof(dr[i]));
  }
  printf("\n\n");

  printf("(2) 위 프로그램에서 배열의 크기을 출력해 봅시다.\n");
  printf("ar: %d\n", sizeof(ar) / sizeof(int));
  printf("br: %d\n", sizeof(br) / sizeof(int));
  printf("dr: %d\n", sizeof(dr) / sizeof(int));
}

//w1_DrawCode1 1.다음 프로그램을 실행해 봅시다.
