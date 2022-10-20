#define _CRT_SECURE_NO_WARNINGS 1
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



//分支语句


//#includ<stdio.h>
//int main()
//{
//	int age=0;							//(多分支用else if)
//	scanf("%d",&age);
//	if(age<18)
//		{
//			printf("未成年\n");
//			printf("不能光明正大进网吧\n");			//(如果条件成立，要执行多条语句，应该使用代码块{})
//	}
//	else if(age>=18 && age<28)
//	printf("青年\n");
//	else if(age>=28 && age<50)
//	printf("壮年\n");
//	else if(age>=50 && age<90)
//	printf("老年\n");
//	else
//		printf("高龄\n");
//
//return 0;
//}

//#include<stdio.h>
//int main()
//
//{
//	int a=0,b=2;
//	if(a==1)	//(只有第一项成立，再进入第二项，否则无法继续进行)（a=0时不满足第一项 输出就无结果，若等于1则看b，b为2则输出hehe 否则就是haha）
//		if(b==2) //(==表判断
//			printf("hehe\n");
//		else	//（else于离他最近的if对应）
//			printf("haha\n");
//
//return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	while(i<=100)
//	{
//	if(i%2==1)
//		printf("%d	",i);
//	i++;
//	}
//
//return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=100)
//	{
//	printf("%d	",i);
//	i+=2;
//	}
//
//return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int day=0;
//	scanf("%d",&day);
//	switch(day)		//(switch后的括号里必须为整形)（float类型（0.34）则报错）
//	{
//	case 1:
//		printf("星期一\n");
//		break;		（跳出当前代码块）
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//
//return 0;
//}