#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	int year;
	do {
		printf("윤년 판단 프로그램\n판단을 원하는 연도를 입력하세요\n");
		scanf("%d",&year);
		if (year % 400 == 0) {
			printf("%d년은 윤년입니다.\n", year);
		}
		else if (year % 100 == 0) {
			printf("%d년은 윤년이 아닙니다.\n", year);
		}
		else if (year % 4 == 0) {
			printf("%d년은 윤년입니다..\n", year);
		}
		else
			printf("%d년은 윤년이 아닙니다..\n",year);
	} while (1);
	return 0;
}