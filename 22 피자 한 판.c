#include <stdio.h>
int main()
{
	int r;
	printf("Enter a radius : \n");
	scanf_s("%d", &r);
	printf("%.2f", r * r * 3.14);
	
	return 0;
}