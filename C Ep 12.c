#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	do {
		double a, b, c;
		printf("������ ���� �Է��ϼ���");
		scanf("%lf %lf %lf", &a, &b, &c);
		if (a >= b) {
			if (a >= c)
				printf("%.2lf�� ���� ū���Դϴ�.", a);
			else
				printf("%.2lf�� ���� ū���Դϴ�.", c);
		}
		else {
			if (b >= c)
				printf("%.2lf�� ���� ū���Դϴ�.", b);
			else
				printf("%.2lf�� ���� ū �� �Դϴ�.", c);
		}
	} while (1);
	/*double a, b, c;
	printf("3���� ���� �Է��ϼ���");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a > b && a > c) {
		printf("%.2lf�� ���� ū���Դϴ�.\n", a);
	}
	else if (c > b && c > a) {
		printf("%.2lf�� ���� ū���Դϴ�.\n", c);
	}
	else
		printf("%.2lf�� ���� ū���Դϴ�.\n", b);
		*/
	return 0;
}