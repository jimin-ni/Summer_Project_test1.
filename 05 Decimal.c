#include <stdio.h>
int main()
{
	printf("%d\n", 100);
	printf("%d	%d	%d\n", 100, 200, 300);
	printf("%d + %d = %d\n", 100, 200, 300);
	printf("%d + %d = %d\n", 100, 200, 100+200);
	printf("%d - %d = %d\n", 200, 100, 200 - 100);

	return 0;
}

// decimal 은 %d로 나타내며, 이후 따옴표 안에 수를 넣지 않는다. 