#define _CRT_SECURE_NO_WARNINGS 1

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

/*#include<stdio.h>
int main()
{
	int day=0;
	scanf("%d",&day);
	switch(day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;		//	(跳出当前代码块)
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:			//（default表示其他状况的情况（else））
		printf("输入错误 请输入1-7\n");
		break;
	}
return 0;
}