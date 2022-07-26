#include <stdio.h>
int main()
{
	printf("%c\n", 'A');
	printf("%c%c\n", 'A', 'B');
	printf("%c   %c\n", 'A', 'B');								// 실제 공백을 둔 것이 출력시 공백으로 적용.
	printf("%c%c%c\n", 'A', 'A' + 1, 'A' + 2);			// >>>ABC  흥미롭다..		
	printf("%c\n", 90);											// 90>>> Z 아스키코드로 인식 | '90'>>>0

	return 0;
}