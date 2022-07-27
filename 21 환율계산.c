#include <stdio.h>
int main()
{
	int dollar;
	printf("Enter the amount of dollar : \n");
	scanf_s("%d", &dollar);
	printf("%.1f", dollar * 1314.0);						//소수점아래 1자리 표현을 위해 f  즉 실수를 이용하며 .1을 이용함 
	return 0;
}