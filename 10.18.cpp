#define _CRT_SECURE_NO_WARNINGS 1
//struct Book
//{
//	char name[20];
//	short price;
//	char nofw[10];	//(char字符定义后要加[])
//};
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	struct Book b1={"c语言程序设计",55,"比提"};
//	b1.price=15;//(修改数字)
//	strcpy(b1.nofw,"鼻涕"); //(修改作者名，因为price为整形而nofw为字符串所以不能像上面一样直接修改，需要用到strcpy函数，又因为是库函数所以需要添加头文件（string.h）)
//	printf("书名:%s\n",b1.name);
//	printf("价格:%d\n",b1.price);
//	printf("作者名:%s\n",b1.nofw);
//	//利用pb打印书名和价格
//	//	.结构体变量.成员(第一种)
//	//	 结构体指针->成员(第二种)
//
//	struct Book* pb=&b1;
//	printf("%s\n",(*pb).name);		//（第一种）
//	printf("%d\n",(*pb).price);	
//		printf("%s\n",(*pb).nofw);
//	printf("%s\n",pb->name);		//(第二种)
//	printf("%d\n",pb->price);
//	printf("%s\n",pb->nofw);
//return 0;
//}
//#define MAX(X,Y)(X>Y?X:Y)
//#include<stdio.h>
//int main()
//{
//	int a=30,b=20,max=0;
//	max=MAX(a,b);
//	printf("%d\n",max);
//return 0;
//}
//#define ADD(X,Y)((X)+(Y))
//#include<stdio.h>
//int main()
//{
//	int a=0,b=0,sum=0;
//	scanf("%d%d",&a,&b);
//	//sum=a+b;
//	sum=ADD(a,b);
//		printf("sum=%d\n",sum);
//return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a=10;
//		int* p=&a;
//	printf("%p\n",a);
//	*p=20;
//	printf("%d\n",a);
//return 0;
//}

//struct Book
//{
//	char name[20];
//	char nofw[10];
//	short price;
//
//};
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	struct Book b1={"c语言程序设计","比提",55};
//	b1.price=15;
//	strcpy(b1.nofw,"鼻涕");
//	printf("书名:%s\n",b1.name);
//	printf("作者名:%s\n",b1.nofw);
//	printf("价格:%d\n",b1.price);
//
//	struct Book* pb=&b1;
//	printf("书名:%s\n",b1.name);
//	printf("书名:%s\n",(*pb).name);
//	printf("作者名:%s\n",(*pb).nofw);
//	printf("价格:%d\n",(*pb).price);
//
//	printf("书名:%s\n",pb->name);
//	printf("作者名:%s\n",pb->nofw);
//	printf("价格:%d\n",pb->price);
//return 0;
//}
//
