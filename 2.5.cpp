#define _CRT_SECURE_NO_WARNINGS 1
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//void menu()
//{
//	printf("********************\n");
//	printf("*1.paly 0.exit *****\n");
//	printf("********************\n");
//
//}
//void game()
//{
//	int guess=0;
//	int ret=0;
//		ret=rand()%100+1;
//	printf("%d",ret);
//	while(1)
//{
//	printf("please guess the numble (1-100)\n");
//	scanf("%d",&guess);
//	if(guess<ret)
//{
//	printf("higher\n");
//}
//else if(guess>ret)
//{
//	printf("lower\n");
//}
//else
//	{
//		printf("sucessed!\n");
//		break;
//}
//
//}
//}
//
//int main()
//{
//	int input=0;
//	system("color F3");
//	srand((unsigned int)time(NULL));
//	do
//	{
//	menu();
//	printf("input the numble>:\n");
//	scanf("%d",&input);
//	switch(input)
//	{
//	case 1:
//		game();
//		break;
//	case 0:
//		printf("take off the game\n");
//		break;
//	default:
//		printf("input error\n");
//	}
//	
//	}while(input);
//
//return 0;
//}
					//while 里使用switch可以控制循环


//#include<stdio.h>
//
//void swap(int* m,int* n)
//{
//int temp=0;
//temp=*n;
//*n=*m;
//*m=temp;
//
//}
//
//int main()
//{
//
//	int a=0,b=0;
//	scanf("%d%d",&a,&b);
//	swap(&a,&b);
//	printf("%d	%d",a,b);
//return 0;
//}


		//函数可以嵌套使用
		//传值调用和传址调用（是否需要改变主参（调用函数时后面的参数）自定义函数时后面的参数是形参）
		//传值就是传值上去用（Add），需要修改主参就传地址（swap）
		//不需要返回值时用void  需要返回值时看返回值类型 使用int等  return后是返回的值

		//链式访问
		//将一个函数的返回值作为另一个函数的参数
//例如：
//#include<stdio.h>
//
//int main()
//{
//	printf("%d",printf("%d",printf("%d",567)));//输出结果为567 31
//											  //printf函数的返回值是打印出的字符的个数
//											//567个数为3 返回3 第二个printf函数打印3
//											//返回值为1 第三个printf打印1
//return 0;
//}