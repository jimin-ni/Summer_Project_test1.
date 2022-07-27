#include <stdio.h>
int main()
{
	char fruit[101];
	printf("What is your favorite fruit?\n");
	scanf_s("%s", fruit);
	printf("You like %s !\n", fruit);

	return 0;
}

//오류 확인 : 빌드에 문제는 없으나, 실제 실행 후 사용자가 입력한 값을 출력하지 않는 문제 발생. 
// 해결방법: 못찾음.