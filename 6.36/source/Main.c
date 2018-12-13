#include <stdio.h>
#include <stdlib.h>
void reverse(char const winput[], int b);

int main()
{
	char input[40] = {0};
	int a;
	printf("½Ğ¿é¤J¦r¦ê:");
	scanf_s("%s", input, 40);
	reverse(input, strlen(input)-1);
	system("pause");
	return 0;
}
void reverse(char const winput[], int b)
{
	if (b != -1)
	{
		printf("%c", winput[b]);
		reverse(winput,b-1);
	}
}