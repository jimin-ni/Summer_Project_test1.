#include <stdio.h>
int main()
{
	long long int k, l;								// long long int �� ���� �����ڴ� %lld
	k = 1000000000;
	l = 2000000000;
	printf("%lld\n", k + l);

	scanf_s("%lld%lld", &k, &l);
	printf("%lld\n", k + l);
	printf("%lld\n", k * l);

	return 0; 
}