#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	double num;
	printf("���ڸ� �Է��ϼ���");
	scanf("%lf", &num);
	if (num > 0)
		printf("%lf �� ����Դϴ�.", num);
	else if(num < 0)
		printf("%lf �� �����Դϴ�.", num);
	else
		printf("0�Դϴ�.");

	return 0;
}