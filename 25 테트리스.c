#include <stdio.h>
												// A+���� Ű�� ��ϵ� Ư�����ڸ� �̿��ϸ� �����ڵ� ���� �߻�x
												// . + windo Ű�� ��ϵ� Ư������ �̿�� �����ڵ� ���� �߻�o
int main()
{
	int score = 0;
	int combo = 0;							// ���� ���� �� �ʱ�ȭ 

	printf("========================\n");
	printf("======���� ���� ��Ʈ����=====\n");
	printf("========================\n");

	printf("%14s\n", "ȸ��");
	printf("%13s\n", "��");
	printf("%12s", "�������� �̵� ��");
	printf("%12s\n", "���������� �̵�");
	printf("%13s\n", "��");
	printf("%14s\n", "����");
	printf("%19s\n", "spacebar : ���� ����");

	printf("========================\n");
	printf("	SCORE		:		%d\n", score);
	printf("	COMBO		:		%d\n", combo);
	printf("========================\n");

	return 0;
}