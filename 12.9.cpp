#define _CRT_SECURE_NO_WARNINGS 1

					//函数递归 函数自己调用自身  递归只需要少量代码实现多次运算 减少代码量
					//递归书写时 必须有条件,不然会死循环并栈溢出
					//递归的两个必要条件:
							//存在限制条件,当满足限制条件后不再递归
							//每次递归调用之后越来越接近这个限制条件
//#include<stdio.h>
//
//void print(int n)
//{
//	if(n>9)					//if这个语句便是限制条件
//	{
//	print(n/10);//(将末尾分离（123—>12 3   12又赋给n）)
//	}
//	printf("%d	",n%10);//(个位)
//
//}
//int main()
//{
//	int num=0;
//	scanf("%d",&num);
//	print(num);
//
//return 0;
//}
//
//#include<stdio.h>
//
//void print(int x)
//{
//	if(x>9)
//	{
//		print(x/10);
//	}
//	printf("%d	",x%10);
//
//}
//
//int main()
//{
//	int num=0;
//	scanf("%d",&num);
//	print(num);
//
//return 0;
//}
//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	int count=0;
//	while(*arr!='\0')
//	{
//	count++;
//	arr++;
//	
//	
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[]="bit";
//	int lenth=my_strlen(arr);
//	printf("lenth=%d\n",lenth);
//
//return 0;
////}
//
//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	if(*arr!='\0')
//	{
//		return 1+my_strlen(arr+1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[]="bit";
//	int lenth=my_strlen(arr);
//	printf("lenth=%d\n",lenth);
//
//return 0;
//}