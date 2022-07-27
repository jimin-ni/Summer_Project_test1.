#include <stdio.h>
int main()
{
	float pi;
	pi = 3.14;
	printf("%f\n", pi);
	printf("%.2f\n", pi);					// 소수점 아래 2자리까지만 표기 

	scanf_s("%f", &pi);
	printf("%.4f\n", pi);

	return 0;
}