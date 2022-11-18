#include <stdio.h>

int main(void) {
  int i, j, k;
  int big;
  int arr[10000];

  scanf("%d", &k);

  if (k <= 0 || k >= 10001) {
    printf("1 ~ 10000 사이로 입력 하세요;");
    exit(0);
  }

  k--;

  for (i = 0; i < k; i++) {
    scanf("%d", &arr[i]);
  }

  big = arr[0];

  for (i = 1; i < k; i++) {
    if (arr[i] < big) {
      big = arr[i];
    }
  }

  printf("%d", big);

  return 0;
}
