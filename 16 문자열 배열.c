#include <stdio.h>
int main()
{
	char fruit[101];
	printf("What is your favorite fruit?\n");
	scanf_s("%s", fruit, 101);
	printf("You like %s !\n", fruit);

	return 0;
}

//���� Ȯ�� : ���忡 ������ ������, ���� ���� �� ����ڰ� �Է��� ���� ������� �ʴ� ���� �߻�. 
// �ذ���: scanf_s�� ���� _s�� ���� �Լ��� ���ڿ��� ���� ��, �� �̸��� �޸��� ũ�Ⱑ ��õǾ�� �Ѵ�.
//				������, scanf_s("%s", fruit, 101); �� ���� �� �޸� ũ��� �ο������μ� �ذ� �����ϴ�. 