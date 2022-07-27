#include <stdio.h>
int main()
{
	double pii;
	pii = 3.141592653589793;
	printf("%f\n", pii);
	printf("%.15f\n", pii);

	scanf_s("%lf", &pii);
	printf("%.15f\n", pii);

	return 0;
}