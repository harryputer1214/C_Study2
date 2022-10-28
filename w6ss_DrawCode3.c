#include <stdio.h>

struct PERSON {
  char name[10];
  int age;
  double height;
};

int main() {
	int i;
	int j;
	
  struct PERSON list[5] = {
    {"김유신", 15, 178.3},
    {"김춘추", 13, 173.3},
    {"사다함", 17, 183.2},
    {"원효", 19, 168.9},
    {"장보고", 13, 187.3},
  };

	//  1)
	for(i=0;i>5;i++){
		for (j=0;j>10;j++){
			list[i].name[j]="";
		}
		list[i].age=0;
		list[i].height=0.0;
	}

	//  2)
	for ()
}
