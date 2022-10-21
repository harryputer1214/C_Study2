#include <stdio.h>

struct CIRCLE {
  int x;
  int y;
  double r;
};

int main() {
  struct CIRCLE c1;
  struct CIRCLE c2 = {5, 9, 1.0};
  struct CIRCLE c3;
  struct CIRCLE c4;

  c1.x = 2;
  c1.y = 3;
  c1.r = 5.0;

  printf("c1의 좌표(%d, %d) r = %f\n", c1.x, c1.y,c1.r);
  printf("c2의 좌표(%d, %d) r = %f\n", c2.x, c2.y,c2.r);

  c3 = c1;
  c4.x = c2.y;
  c4.y = c2.x;
  printf("c3의 좌표(%d, %d) r = %f\n", c3.x, c3.y,c3.r);
  printf("c4의 좌표(%d, %d) r = %f\n", c4.x, c4.y,c3.r);

  return 0;
}
