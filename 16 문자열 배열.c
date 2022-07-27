#include <stdio.h>
int main()
{
	char fruit[101];
	printf("What is your favorite fruit?\n");
	scanf_s("%s", fruit, 101);
	printf("You like %s !\n", fruit);

	return 0;
}

//오류 확인 : 빌드에 문제는 없으나, 실제 실행 후 사용자가 입력한 값을 출력하지 않는 문제 발생. 
// 해결방법: scanf_s와 같이 _s가 붙은 함수는 문자열을 받을 때, 그 이름과 메모리의 크기가 명시되어야 한다.
//				때문에, scanf_s("%s", fruit, 101); 와 같이 그 메모리 크기룰 부여줌으로서 해결 가능하다. 