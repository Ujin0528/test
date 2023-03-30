#include<stdio.h>
#pragma warning(disable:4996)
//두 숫자를 곱하는 프로그램
int main()
{
	double num1, num2,product;
	printf("두 숫자를 입려하세요 : ");
	scanf("%lf %lf",&num1, &num2);
	product = num1 * num2;
	printf("두 수의 곱은 %.2lf입니다", product); //%a.b lf 에서 a는 숫자 자리수 b는 소수점 b자리수 를 의미 

	return 0;

}