#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *in = fopen("NumberFile.txt", "r");
  int m, n;
  double d1, d2;

  if (in == NULL) {
    printf("파일 없음\n");
    exit(1);
  }

  printf("정수 두 개를 입력합니다 ");
  fscanf(in, "%d %d", &n, &m);
  printf("실수 두 개를 입력합니다 ");
  fscanf(in, "%lf %lf", &d1, &d2);

  printf("\n입력 받은 수들을 모두 출력합니다.\n");
  printf("%d %d\n", n, m);
  printf("%lf %lf\n", d1, d2);
  printf("\n\n>>>>>>>>>>>>>>>>>>>>\n");
  printf("어디서 입력 받았을까요?\n");

  fclose(in);

  return 0;
}
