#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	int n,i, sum=0;
	printf("1����n������ �� ���ϱ�\nn�� ���� �Է��ϼ���\n");
	scanf("%d", &i);
	for (n = 1; n <= i; ++n)
		sum += n;
	printf("%d", sum);
	return 0;
}