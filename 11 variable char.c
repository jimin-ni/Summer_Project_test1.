#include <stdio.h>
int main()
{
	char a;										//���� ���� 
	a = 'A';
	printf("%c\n", a);
	
	scanf_s("%c", &a);					// ����ڷκ��� �Է¹���.
	printf("%c\n", a);

	printf("%c\n", a+32);				// 32�� ���ϸ� �Է¹��� �빮�ڸ� �ҹ��ڷ� �ٲ�
	
	return 0;
}