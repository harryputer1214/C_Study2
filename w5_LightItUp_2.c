#include <stdio.h>

int main(void) {
  int ar[]={11,21,31,41,51,61,71};
  int *p,*q,*r;

  p=ar;
  q=&ar[1];
  r=(ar+2);

  printf("%d %d\n",*p,ar[0]);
  printf("%d %d\n",*q,*(ar+1));
  printf("%d %d\n",*r,ar[2]);

  return 0;
}
