/*���ǹ� ���� if��,  if - else��,  if - else if��
��ø�� if else��, if{}���� else {}����, if (����) {}, if���� ���� �ϳ��� ������쿡��{}�Ƚᵵ��*/
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num1;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num1);
	if (num1 >= 10) {
		if (num1 == 10) {
			printf("�Է��Ͻ� ���ڴ� 10�Դϴ�", num1);
		}
		else {
			printf("�Է��Ͻ� ���ڴ�10����Ů�ϴ�.");
		}
	}
	else {
		printf("�Զ��Ͻ� ���ڴ� 10���� �۽��ϴ�.");
	}
	
		return 0;
}