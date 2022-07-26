#include <stdio.h>
int main()
{
	printf("2021년 1월 1일\n");
	printf("2021년 01월 01일\n");
	printf("%4d년 %2d월 %2d일\n", 2021, 1, 1);
	printf("%04d년 %02d월 %02d일\n", 2021, 1, 1);									// 자릿수는 2개. 빈칸은 0으로
	printf("%04d년 %02d월 %02d일 %02d시%02d분\n", 2021, 1, 1, 12, 0);

	return 0;
}

