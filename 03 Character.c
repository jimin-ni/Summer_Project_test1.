#include <stdio.h>
int main()
{
	printf("%c\n", 'A');
	printf("%c%c\n", 'A', 'B');
	printf("%c   %c\n", 'A', 'B');								// ���� ������ �� ���� ��½� �������� ����.
	printf("%c%c%c\n", 'A', 'A' + 1, 'A' + 2);			// >>>ABC  ��̷Ӵ�..		
	printf("%c\n", 90);											// 90>>> Z �ƽ�Ű�ڵ�� �ν� | '90'>>>0

	return 0;
}