#include <stdio.h>
int main()
{
	char a, b, c, d, e;
	printf("5글자 영어를 입력하세요: \n");
	scanf_s("%c%c%c%c%c", &a, &b, &c, &d, &e);
	printf("%c%c%c%c%c\n", e, d, c, b, a);

	return 0;
}
// 16번 파일에서 발생한 문제랑 같은 문제 발생.
// scan 이후 다음 문장 자체가 출력x
//문제 해결x 