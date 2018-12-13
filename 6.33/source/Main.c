#include <stdio.h>
#include <stdlib.h>

#define SIZE 7
void sub(int winput, int wleft, int wright, int b[SIZE]);
int main()
{
	int a[SIZE] = { 5,8,11,12,18,22,28 };
	int input;
	int left = 0, right = SIZE-1;
	printf("請輸入想要搜尋的數字:");
	scanf_s("%d", &input);
	if (input == a[SIZE - 1])
	{
		printf("你輸入的數字在第%d個", SIZE );
		system("pause");
		return 0;
	}
	sub(input,left, right,a);
	system("pause");
	return 0;
}
void sub(int winput ,int wleft, int wright,int b[SIZE])
{
	int mid=SIZE-1;
	int differ=wright-wleft;
	
	if ((differ) % 2 == 0)
		mid = differ/2 + wleft;
	else
		mid = differ/2 + wleft ;
	if (winput == b[mid])
		printf("你輸入的數字在第%d個", mid+1);
	else if (wleft == wright)
		printf("你輸入的數字不再陣列中");
	else if (winput < b[mid])
		sub(winput, wleft,mid-1 , b);
	else if (winput>b[mid])
		sub(winput, mid+1, wright, b);
}
