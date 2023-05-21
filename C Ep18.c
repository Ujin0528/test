#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	long n,i,fac=1;
	printf("n팩토리얼 구하기\nn의 값을 입력하세요 ");
	scanf("%ld", &n);

	for (i = 1; i <= n; ++i) {
		fac *= i;
	}
	printf("%ld팩토리얼 값=%ld", n, fac);
	
	return 0;
}