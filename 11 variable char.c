#include <stdio.h>
int main()
{
	char a;										//변수 설정 
	a = 'A';
	printf("%c\n", a);
	
	scanf_s("%c", &a);					// 사용자로부터 입력받음.
	printf("%c\n", a);

	printf("%c\n", a+32);				// 32를 더하면 입력받은 대문자를 소문자로 바꿈
	
	return 0;
}