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
					//while ��ʹ��switch���Կ���ѭ��


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


		//��������Ƕ��ʹ��
		//��ֵ���úʹ�ַ���ã��Ƿ���Ҫ�ı����Σ����ú���ʱ����Ĳ������Զ��庯��ʱ����Ĳ������βΣ�
		//��ֵ���Ǵ�ֵ��ȥ�ã�Add������Ҫ�޸����ξʹ���ַ��swap��
		//����Ҫ����ֵʱ��void  ��Ҫ����ֵʱ������ֵ���� ʹ��int��  return���Ƿ��ص�ֵ

		//��ʽ����
		//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//���磺
//#include<stdio.h>
//
//int main()
//{
//	printf("%d",printf("%d",printf("%d",567)));//������Ϊ567 31
//											  //printf�����ķ���ֵ�Ǵ�ӡ�����ַ��ĸ���
//											//567����Ϊ3 ����3 �ڶ���printf������ӡ3
//											//����ֵΪ1 ������printf��ӡ1
//return 0;
//}