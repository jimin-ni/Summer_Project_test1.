#include <stdio.h>
int main()
{
	int dollar;
	printf("Enter the amount of dollar : \n");
	scanf_s("%d", &dollar);
	printf("%.1f", dollar * 1314.0);						//�Ҽ����Ʒ� 1�ڸ� ǥ���� ���� f  �� �Ǽ��� �̿��ϸ� .1�� �̿��� 
	return 0;
}