#include <stdio.h>
int main()
{
	float pi;
	pi = 3.14;
	printf("%f\n", pi);
	printf("%.2f\n", pi);					// �Ҽ��� �Ʒ� 2�ڸ������� ǥ�� 

	scanf_s("%f", &pi);
	printf("%.4f\n", pi);

	return 0;
}