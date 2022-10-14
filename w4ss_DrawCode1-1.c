#include <stdio.h>

int main(void) {
  int group[6][5]={{23,22,27,21,24},
                   {21,22,25,24,23},
                   {20,23,22,21,24},
                   {25,26,24,27,28},
                   {26,24,28,29,26},
                   {23,22,27,21,24}};
  int i,j=0;

  for(i=0;i<6;i++){
    printf("%d학년\n",i+1);
    for(j=0;j<5;j++){
      printf("   %d반: %d명\n",j+1,group[i][j]);
    }
  }
  return 0;
  }
  
  //전교생 출력
