#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int Fac(int n)
//{
//	int ret=1,i=0;
//	for(i=1;i<=n;i++)
//	{
//	ret=ret*i;
//	}
//
//
//return ret;
//}
//int Fac2(int m)
//{
//	if(m<1)
//		return 1;
//	else 
//		return m*Fac2(m-1);
//
//
//}
//int main()
//{
//	int n=0,sum=0;
//	scanf("%d",&n);
//	sum=Fac2(n);
//	printf("sum=%d",sum);
//
//return 0;
//}
//
//#include<stdio.h>
//int Fib(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}
//int main()
//{
//	int n=0,ret=0;
//	scanf("%d",&n);
//	ret=Fib(n);
//	printf("%d",ret);
//
//return 0;
//}

#include<stdio.h>

int Fib(int x)
{
	int a=1,b=2,c=1;
	while(x>2)
	{
	c=a+b;
	a=b;
	b=c;
	x--;
	
	}
	return c;
}
int main()
{
	int n=0,ret=0;
	scanf("%d",&n);
	ret=Fib(n);
	printf("%d",ret);

return 0;
}
			//递归和循环的选择  谁简单用谁 都简单用喜欢的 递归注意栈溢出
		//汉诺塔问题和青蛙跳台阶问题 （经典递归问题）  《剑指offer》67道笔试题