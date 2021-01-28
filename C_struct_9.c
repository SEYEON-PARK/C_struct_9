#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Lucky
{
	int a;
	double b;
}; //구조체 정의

int main(void)
{
	srand((unsigned)time(NULL)); //숫자를 랜덤으로 만들기 위해서
	
	struct Lucky one; 

	one.a = rand() % 10;
	one.b = rand() % 10;

	printf("%d %lf", one.a, one.b); //출력하기

	return 0;
}
