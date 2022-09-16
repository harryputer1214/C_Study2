#include <stdio.h>

int main(void) {
  double height[4];
  int j=2;
  int i;

  height[0]=145.7;
  height[1]=156.3;
  height[j]=147.89;
  j++;
  height[j]=159.4;

  for(i=0;i<4;i++){
    printf("height[%d]: %.2f\n",i,height[i]);
  }
  return 0;
}

//w1_LightItUp2
