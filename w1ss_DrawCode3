#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  float com_num[10];
  float max=0.0;
  int i;
  float randnum_check=0.0;
  int test;
  
  srand((unsigned)time(NULL));
  
   for (i = 0; i < 10; i++) {
    randnum_check =  (float)(rand() % 45)/10;
    com_num[i] = randnum_check;
    printf("%f\n",com_num[i]);
    
  }
  for(i = 0; i < 10; i++) {
    
    test=com_num[i]>max;
    if (test==1){
    max=com_num[i];
    }
    }
  
  printf("%.1f\n",max);
  
  return 0;
}

//w1ss_DrawCode3 3. 10개의 요소를 가질 수 있는 실수형 배열을 선언하고, 다음 조건으로 실수를 무작우ㅣ로 입력 한 후 요소들 중 가장 큰 실수를 찾아 출력해 봅시다.
