#include <stdio.h>

int main(void) {
  double standard = 0.0;
  double mine = 0.0;
  double hei = 0.0;
  double wei = 0.0;

  scanf("%lf %lf", &hei, &wei);

  standard = (hei-100) * 0.9;

  wei = wei - standard;
  mine = wei * 100;
  mine = mine / standard;

  if (mine <= 10.0) {
    printf("정상\n");
  } else if (mine > 10.0 && mine <= 20.0) {
    printf("과체중\n");
  } else {
    printf("비만\n");
  }

  return 0;
}
