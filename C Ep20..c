#include<stdio.h>
#pragma warning(disable:4996)
int main() {
/*
	int n1=0, n2=1, nt=0,n;

	printf("n��° �Ǻ���ġ ������ �� (n���Է�) : ");
	scanf("%d", &nt);
	printf("%d %d", n1, n2);
	int next = n1 + n2;
	for (n = 3; n <= nt; n++) {   //3���� �����ϴ� ������ 0 1�� ���� ����ϰ� ������ ������ Ƚ���� ���߱� ����
		printf("%d ", next);
		n1 = n2;        //�ι�°�� ���� n1�� �Ѿ��
		n2 = next;      //����°�� ����  n2�� �Ѿ
		next = n1 + n2;  //���ο� �׹�°���� ź��
	}
*/
	int n1=0, n2=1, next=0, n;
	printf("�Է��ϴ� �� ���Ͽ��� ���� ����� �Ǻ���ġ ���� �� ���");
	scanf("%d", &n);
	printf("%d %d ",n1,n2);
	next = n1 + n2;
	while (next < n) {
		printf("%d ", next);
		n1 = n2;
		n2 = next;
		next = n1 + n2;
	}
	return 0;
}