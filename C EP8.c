#include<stdio.h>

int main()
{
	int a;
	long b;
	long long c;
	double d;
	long double e;

	printf("int의 사이즈 :%zu\n", sizeof(int));
	printf("long의 사이즈 :%zu\n", sizeof(long));
	printf("long long의 사이즈 :%zu\n", sizeof(long long));
	printf("double의 사이즈 :%zu\n", sizeof(double));
	printf("long double의 사이즈 :%zu\n", sizeof(long double));
	/*https://www.programiz.com/c-programming/examples/keyword-long 이 사이트에서는 long double이 16bytes 인데실행해보니 8bytes가
     visual studio를 사용해서 그런건가요?*/
	return 0;
}