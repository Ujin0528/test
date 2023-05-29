#include<stdio.h>
#pragma warning(disable:4996)
int main() {
/*
	int n1=0, n2=1, nt=0,n;

	printf("n번째 피보나치 수열의 값 (n값입력) : ");
	scanf("%d", &nt);
	printf("%d %d", n1, n2);
	int next = n1 + n2;
	for (n = 3; n <= nt; n++) {   //3부터 시작하는 이유는 0 1을 먼저 출력하고 나가기 때문에 횟수를 맞추기 위해
		printf("%d ", next);
		n1 = n2;        //두번째의 값이 n1로 넘어가고
		n2 = next;      //세번째의 값이  n2로 넘어감
		next = n1 + n2;  //새로운 네번째값이 탄생
	}
*/
	int n1=0, n2=1, next=0, n;
	printf("입력하는 값 이하에서 가장 가까운 피보나치 수열 값 출력");
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