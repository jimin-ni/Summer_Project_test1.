#include <stdio.h>
int main()
{
	printf("%f\n", 3.14);										// 3.140000 소수점아래 6자리 꽉 채움
	printf("%f\n", 3.141592);				
	printf("%f\n", 3.141592653589793);					// 일곱번 째 자리에서 알아서 반올림 

	printf("%.2f\n", 3.14);									// 소수점 아래 두 자리만 나타내겠다. 
	printf("%f\n", 3.141592);
	printf("%.15f\n", 3.141592653589793);				// 소수점아래 15자리까지 나타내겠다. (기본 6자리 초과)

	return 0;
}