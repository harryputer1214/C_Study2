#include <stdio.h>

int main() {
  int in,in1,in2;
	scanf("%d %d %d",&in,&in1,&in2);

	if(in+in1>in2){
		if(in==in2 && in2==in1){
	  	printf("정삼각형");
  	}
    else if (in==in1 || in==in2 || in1==in2){
	  	printf("이등변삼각형");
  	}
	  else if(in*in+in1*in1==in2*in2){
	  	printf("직각삼각형");
  	}
  	else{
	  	printf("삼각형");
	}}
	else{
		printf("삼각형아님");
	}
	
  return 0;
}

//https://codeup.kr/problem.php?id=1218
