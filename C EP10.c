#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	//3�� �����ڸ� �̿��� ¦�� Ȧ�� �Ǵ����α׷�
	/*int num;
	do {
		printf("¦�� Ȧ�� �Ǵ� ���α׷�\n");
		printf("���ڸ� �Է��ϼ���('0'���α׷� ����) : ");
		scanf("%d", &num);
		if (num==0)
			break;
		(num % 2 == 0 ? printf("¦���Դϴ�.\n") : printf("Ȧ���Դϴ�.\n"));

	} while (1);
	printf("���α׷��� �����մϴ�."); */
	 
	//if else�� ����� ¦�� Ȧ�� �Ǵ����α׷�
	int num;
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &num);
		if (num % 2 == 0) {
			printf("¦���Դϴ�.\n");
		}
		else {
			printf("Ȧ���Դϴ�.\n");
		}
		return 0;
}