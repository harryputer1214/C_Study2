#include <stdio.h>

int main(void) {
  int ar [] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
  int *p = ar;
  int i;
  int len = sizeof(ar) / sizeof(ar[0]);

  printf("<ar>\n");
  for (i = 0; i < len; i++){
    printf("%d %d\n", ar[i], *(ar + i));
  }

  printf("\n");

  printf("<p>\n");
  for (i = 0; i < len; i++){
    printf("%d %d\n", p[i], *(p + i));
  }
  
  return 0;
}
