#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	do {
		double a, b, c;
		printf("세가지 수를 입력하세요");
		scanf("%lf %lf %lf", &a, &b, &c);
		if (a >= b) {
			if (a >= c)
				printf("%.2lf가 가장 큰수입니다.", a);
			else
				printf("%.2lf가 가장 큰수입니다.", c);
		}
		else {
			if (b >= c)
				printf("%.2lf가 가장 큰수입니다.", b);
			else
				printf("%.2lf가 가장 큰 수 입니다.", c);
		}
	} while (1);
	/*double a, b, c;
	printf("3가지 수를 입력하세요");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a > b && a > c) {
		printf("%.2lf가 제일 큰수입니다.\n", a);
	}
	else if (c > b && c > a) {
		printf("%.2lf가 제일 큰수입니다.\n", c);
	}
	else
		printf("%.2lf가 제일 큰수입니다.\n", b);
		*/
	return 0;
}