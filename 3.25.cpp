#define _CRT_SECURE_NO_WARNINGS 1

#include<windows.h>
#include<stdio.h>
//int main()
//{
//	system("color F3");
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tem = a;
//		a = b;
//		b = tem;
//	}
//	 if (a < c)
//	{
//		int tem = a;
//		a = c;
//		c = tem;
//	}
//	 if (b < c)
//	{
//		int tem = b;
//		b = c;
//		c = tem;
//	}
//	printf("%d%d%d", a, b, c);
//
//	return 0;
//}

int main()
{
	int m, n, r;
	scanf("%d%d", &m, &n);
	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;

	}
	printf("%d\n", n);

	return 0;
}