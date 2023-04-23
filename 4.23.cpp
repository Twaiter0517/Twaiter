#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int g, s, b, count=0;
	for (b = 1; b < 5; b++)
	{
		for (s = 1; s < 5; s++)
		{
			for (g = 1; g < 5; g++)
			{
				if (g != s && g != b && b != s)
				{
					printf("%d%d%d\t", b, s, g);
					count++;
				}
			}
		}
	}
	printf("count=%d\n", count);





	return 0;
}