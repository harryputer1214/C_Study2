#include <stdio.h>
#include <string.h>
struct ADDRESS {
  char name[10];
  char phon[20];
  char home[100];
};

int main() {
  struct ADDRESS man1 = {"정해찬", "010-8572-3829",
                         "태양계 지구 대한민국 수원시 영통구 매탄3동"};
  struct ADDRESS man2 = {"황은찬", "010-7166-6691",
                         "태양계 지구 대한민국 수원시 권선구 권선동"};
  struct ADDRESS man3;
  strcpy(man3.name, "김예준");
  strcpy(man3.phon, "010-4004-2559");
  strcpy(man3.home, "태양계 지구 대한민국 수원시 기흥구 서천동");

  printf("%s    %s    %s\n", man1.name, man1.phon, man1.home);
  printf("%s    %s    %s\n", man2.name, man2.phon, man2.home);
  printf("%s    %s    %s\n", man3.name, man3.phon, man3.home);
  return 0;
}
