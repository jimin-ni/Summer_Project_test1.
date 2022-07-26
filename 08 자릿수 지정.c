#include <stdio.h>
int main()
{
	printf("%10s", "name");
	printf("%10s", "korean");
	printf("%10s", "match");
	printf("%10s\n", "average");

	printf("%10s", "jimin");
	printf("%10d", 100);
	printf("%10d", 100);
	printf("%10.2f\n", 100.0);

	printf("%10s", "tae");
	printf("%10d", 100);
	printf("%10d", 95);
	printf("%10.2f\n", 95.70);

	return 0;
}

// 출력 결과가 표처럼 행렬로 정렬.
// 데이터는 자릿수를 지정하면 (10 등) 우측 정렬된다. 