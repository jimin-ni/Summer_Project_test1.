#include <stdio.h>
int main()
{
	printf("%-10s", "name");
	printf("%10s", "korea");
	printf("%10s", "math");
	printf("%10s\n", "average");

	printf("%-10s%10d%10d%10.2f\n",
					"jimin", 100, 100, 100.00);

	printf("%-10s%10d%10d%10.2f\n",
					"tae", 90, 90, 97.50);

	printf("%-10s%10d%10d%10.2f\n",
					"robin", 90, 90, 90.00);

	return 0;
}


//%-10s =	string을 10칸 한정해서 좌측정렬
//%10s  =	string을 10칸 한정해서 우측정렬 