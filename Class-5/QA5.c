#include <stdio.h>
#include <string.h>

int main()
{
	int a[5] = { 21, 16, 11, 9, 18 };
	int b[5] = { 22, 9, 7, 18, 10 };
	for (int i = 0; i < 5; i++)
	{
		int s = 1;
		for (int j = 0; j < 5; j++)
		{
			if (a[i] == b[j])
			{
				s = 0;
				break;
			}
		}
		if (s) printf("%d ", a[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		int s = 1;
		for (int j = 0; j < 5; j++)
		{
			if (b[i] == a[j])
			{
				s = 0;
				break;
			}
		}
		if (s) printf("%d ", b[i]);
	}
	return 0;
}