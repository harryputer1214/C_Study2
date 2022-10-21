#include <stdio.h>

struct COORDI {
  int x;
  int y;
};

int main() {
  struct COORDI p1;
  struct COORDI p2 = {5, 9};
  struct COORDI p3;
  struct COORDI p4;

  p1.x = 2;
  p1.y = 3;

  printf("p1의 좌표(%d, %d)\n", p1.x, p1.y);
  printf("p2의 좌표(%d, %d)\n", p2.x, p2.y);

  scanf("%d %d", &p3.x, &p3.y);
  p4 = p2;
  
  printf("p3의 좌표(%d, %d)\n", p3.x, p3.y);
  printf("p4의 좌표(%d, %d)\n", p4.x, p4.y);

  return 0;
}
