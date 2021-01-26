#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Lucky
{
	int a;
	double b;
};

int main(void)
{
	srand((unsigned)time(NULL));
	
	struct Lucky one;

	one.a = rand() % 10;
	one.b = rand() % 10;

	printf("%d %lf", one.a, one.b);

	return 0;
}