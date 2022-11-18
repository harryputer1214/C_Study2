#include <stdio.h>

int main(void) {
  int i, k;
  int l[100];

  scanf("%d", &k);

  if (k >= 101) {
    printf("100이하로 쓰세요.\n");
		exit(0);
  }

	k--;
	
  for (i = 0; i <= k; i++) {
    scanf("%d", &l[i]);
  }


  for (i = 0; i <= k; i++) {
    printf("%d\n", l[i]);
  }

  for (i = 0; i <= k; i++) {
    printf("%d\n", l[i]);
  }

  return 0;
}
