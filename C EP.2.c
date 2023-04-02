/*
변수지정 규칙 1.숫자와 문자 _만 사용가능 
              2.첫글자는 문자나 _만 사용가능

int는 정수 변수 선언할때 사용 %d,%i
doulbe float는 실수 변수 선언할때 사용 double float의 차이점은 크기와 소수점자릿수
double= %lf ,float=%f
char는 문자하나  %c
*/

#include<stdio.h>
#pragma warning (disable:4996) //#pragma waring (disable:4996)은 scanf_s대신 사용
int main()
{
	int num;
		printf("정수를 입력하세요");
		scanf("%d", &num);
		printf("입력한 정수의 값은:%d입니다", num);
	
	return 0;
}
