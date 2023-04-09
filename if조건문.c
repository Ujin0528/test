/*조건문 종류 if문,  if - else문,  if - else if문
중첩된 if else문, if{}따로 else {}따로, if (조건) {}, if문에 문이 하나만 있을경우에는{}안써도됨*/
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num1;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num1);
	if (num1 >= 10) {
		if (num1 == 10) {
			printf("입력하신 숫자는 10입니다", num1);
		}
		else {
			printf("입력하신 숫자는10보다큽니다.");
		}
	}
	else {
		printf("입락하신 숫자는 10보다 작습니다.");
	}
	
		return 0;
}