#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num1;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num1);
	if (num1 % 2 == 0) {
		printf("¦���Դϴ�.");
	}
	else
		printf("Ȧ���Դϴ�.\n");
		
	int num2;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num2);
	
	(num2 % 2 == 0) ? printf("¦���Դϴ�.") : printf("Ȧ���Դϴ�."); //a?b:c : a�� �´ٸ�b, �ƴϸ� c�� ����
		return 0;
}