#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	int year;
	do {
		printf("���� �Ǵ� ���α׷�\n�Ǵ��� ���ϴ� ������ �Է��ϼ���\n");
		scanf("%d",&year);
		if (year % 400 == 0) {
			printf("%d���� �����Դϴ�.\n", year);
		}
		else if (year % 100 == 0) {
			printf("%d���� ������ �ƴմϴ�.\n", year);
		}
		else if (year % 4 == 0) {
			printf("%d���� �����Դϴ�..\n", year);
		}
		else
			printf("%d���� ������ �ƴմϴ�..\n",year);
	} while (1);
	return 0;
}