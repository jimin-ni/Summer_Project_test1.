#include <stdio.h>
int main()
{
	int minute;
	printf("Enter a minute: \n");
	scanf_s("%d", &minute);
	printf("%d\n", minute * 60);

	return 0;
}