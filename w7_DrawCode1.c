#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *in = fopen("StringFile.txt", "r");
  char str1[30];
  char str2[30];
  char str3[30];

  if (in == NULL) {
    printf("파일 없음\n");
    exit(1);
  }

  fgets(str1, sizeof(str1), in);
  fgets(str2, sizeof(str2), in);
  fgets(str3, sizeof(str3), in);

  puts(str1);
  printf("%s", str2);

  fputs(str3, stdout);
  fclose(in);

  return 0;
}
