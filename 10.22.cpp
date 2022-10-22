#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>			//(一个switch读数练习：求m，n输出值)
//int main()
//{
//	int n=1;	//（取值的数字含义是指从第几种情况进入）
//	int m=2;
//	switch(n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch(n)	//(switch允许嵌套使用）
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
////	default:
////		break;	
////	}
////	printf("m=%d\nn=%d\n",m,n);
////return 0;
////}
//

//循环语句  

//
//#include<stdio.h>
//int main()
//{
//	while(1)
//		printf("你是sb!\n");
//
//return 0;
//}

/*#include<stdio.h>
int main()
{
	int i=0;
	while(i<10)
	{
		i++;
	if(i==5)
		continue;
	// (continue是用于终止本次循环的，也就是本次循环中continue后面的代码不会再执行，而是直接跳转到while语句的判断部分（最上面while的地方）进行下一次循环的入口判断)
		printf("%d	",i);

	}

return 0;
}
*/

//#include<stdio.h>
//int main()
//{
//	int ch=getchar();
//	putchar(ch);		//(putchar()==printf)
//	printf("%c\n",ch);
//
//return 0;
//}

#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//(EOF=end of file)(如需要终止循环则用Ctrl+z)
	{
		putchar(ch);
	}

	return 0;
}