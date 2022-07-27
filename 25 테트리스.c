#include <stdio.h>
												// A+한자 키로 등록된 특수문자를 이용하면 유니코드 오류 발생x
												// . + windo 키로 등록된 특수문자 이용시 유니코드 오류 발생o
int main()
{
	int score = 0;
	int combo = 0;							// 변수 설정 및 초기화 

	printf("========================\n");
	printf("======내가 만든 테트리스=====\n");
	printf("========================\n");

	printf("%14s\n", "회전");
	printf("%13s\n", "↑");
	printf("%12s", "왼쪽으로 이동 ↔");
	printf("%12s\n", "오른쪽으로 이동");
	printf("%13s\n", "↓");
	printf("%14s\n", "내림");
	printf("%19s\n", "spacebar : 전부 내림");

	printf("========================\n");
	printf("	SCORE		:		%d\n", score);
	printf("	COMBO		:		%d\n", combo);
	printf("========================\n");

	return 0;
}