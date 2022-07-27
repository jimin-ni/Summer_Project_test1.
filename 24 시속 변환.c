#include <stdio.h>
int main()
{
	//double mtok;
	int speed;

	printf("Enter mi/h that you want to change : \n");
	scanf_s("%d", &speed);
	printf("%.6f km/h\n ", speed * 1.609344);

	return 0;
}