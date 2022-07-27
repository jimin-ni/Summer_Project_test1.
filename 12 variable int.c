#include <stdio.h>
int main()
{
	int n, m;
	n = 5;
	m = 2;
	printf("%d\n", n + m);
	scanf_s("%d  %d\n", &n, &m);
	printf("%d\n", n + m);
	printf("%d\n", n * m);

	return 0; 
}