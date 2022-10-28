#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *out = fopen("NumberFile.txt", "w");
  int m,n;
	double d1,d2;

  if (out == NULL) {
    printf("파일 없음\n");
    exit(1);
  }

  printf("정수를 두 개 입력하세요: ");
	scanf("%d %d",&n,&m);
	printf("실수를 두 개 입력하세요: ");
	scanf("%lf %lf",&d1,&d2);

  fprintf(out, "%d %d\n",n,m);
	fprintf(out, "%lf %lf\n",d1,d2);

	fclose(out);
	
  return 0;
}
