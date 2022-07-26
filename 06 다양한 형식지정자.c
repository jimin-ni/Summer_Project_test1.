#include <stdio.h>

int main()
{
	printf("%d\n", 2147483647);
	printf("%d\n", -2147483647-1);
	printf("%u\n", 4294967295);
	printf("%u\n", 0);
	printf("%lld\n", 9223372036854775807);
	printf("%lld\n", 9223372036854775808-1);
	printf("%d\n", 2147483647+1);							//오버플로
	printf("%d\n", -2147483648-1);							//부호 이슈

	return 0;
}