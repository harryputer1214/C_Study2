#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int com_num[10];
  int sum=0;
  int i;
  int randnum_check=0;
  
  srand((unsigned)time(NULL));
  
   for (i = 0; i < 10; i++) {
     randnum_check =  (rand() % 9)+1;
    com_num[i] = randnum_check;
  }

  for(i = 0; i < 10; i++) {
    sum=sum+com_num[i];
  }
  printf("%d",sum);
  
  return 0;
}

//2. 정수형 배열에 한 자리 정수를 무작위로 넣은 후 배열의 요소의 합을 출력해 봅시다.
