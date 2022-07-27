#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	printf("Enter a number : \n");
	scanf_s("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	printf("%d\n", a + b + c + d + e);
	return 0;
}