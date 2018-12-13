#include <stdio.h>
#include <stdlib.h>

int main()
{
	int point[11] = { 0 };
	int i, j, total;
	srand(time(NULL));
	for (i = 0; i < 36000; i++)
	{
		total = 0;
		total = rand() % 6 + 1 + rand() % 6 + 1;
		point[total - 2]++;
	}
	for (i = 2; i < 13; i++)
	{
		printf("%d擲出的次數為:%d次\n", i, point[i - 2]);
	}
	system("pause");
	return 0;
}

