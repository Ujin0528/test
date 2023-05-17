#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	double num;
	printf("숫자를 입력하세요");
	scanf("%lf", &num);
	if (num > 0)
		printf("%lf 는 양수입니다.", num);
	else if(num < 0)
		printf("%lf 는 음수입니다.", num);
	else
		printf("0입니다.");

	return 0;
}