//변수의 크기를 찾는 프로그램
#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a;
	float b;
	double c;
	char d;

	printf("int의 사이즈 : %zu\n", sizeof(a));
	printf("float의 사이즈 : %zu\n", sizeof(b));
	printf("doulbe의 사이즈 : %zu\n", sizeof(c));
	printf("char의 사이즈 : %zu\n", sizeof(d));
	
	/*질문 제가 결과만 보고 따라해본다고 처음에 코딩을 했을때 %zu의 존재를 몰라서 %d로 했는데 %zu를 썼을때와 결과가 같게 나오던데
	그럼 그냥 %d를 사용하면 안되는건가요?*/
	return 0;

}