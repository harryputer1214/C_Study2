#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;
	char ch;
	
	fp = fopen("CharOut.txt","r");

  if (fp == NULL) {
    printf("파일 없음\n");
    exit(1);
  }

	ch=fgetc(fp);
	printf("%c",ch);
	ch=fgetc(fp);
	putchar(fp);
	
  fclose(fp);

  return 0;
}
