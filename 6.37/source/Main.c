#include <stdio.h>
#include <stdlib.h>
void sub(int a[8], int b,int max);
int main()
{
	int a[8] = { 20,7,65,13,44,99,80,55 };
	int max = a[0];
	sub(a, 7, max);
	system("pause");
	return 0;
}
void sub(int a[8], int b,int max)
{
	int c=max;
	if (b == 0)
		printf("最大數為:%d\n", max);
	if (c < a[b])
		c = a[b];
	if(b!=0)
	sub(a, b-1, c);
}