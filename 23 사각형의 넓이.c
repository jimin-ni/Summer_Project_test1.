#include <stdio.h>
int main()
{
	long long int x, y;
	printf("Enter two numbers for squard :\n");
	scanf_s("%lld%lld", &x, &y);
	printf("%lld", x * y);

	return 0;
}