#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	int n,i, sum=0;
	printf("1부터n까지의 합 구하기\nn의 값을 입력하세요\n");
	scanf("%d", &i);
	for (n = 1; n <= i; ++n)
		sum += n;
	printf("%d", sum);
	return 0;
}