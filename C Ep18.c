#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	long n,i,fac=1;
	printf("n���丮�� ���ϱ�\nn�� ���� �Է��ϼ��� ");
	scanf("%ld", &n);

	for (i = 1; i <= n; ++i) {
		fac *= i;
	}
	printf("%ld���丮�� ��=%ld", n, fac);
	
	return 0;
}