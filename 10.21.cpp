#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//
//{
//	int a=0,b=2;
//	if(a==1)	//(ֻ�е�һ��������ٽ���ڶ�������޷���������)��a=0ʱ�������һ�� ������޽����������1��b��bΪ2�����hehe �������haha��
//		if(b==2) //(==���ж�
//			printf("hehe\n");
//		else	//��else�����������if��Ӧ��
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
//	switch(day)		//(switch������������Ϊ����)��float���ͣ�0.34���򱨴�
//	{
//	case 1:
//		printf("����һ\n");
//		break;		��������ǰ����飩
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
		printf("������\n");
		break;		//	(������ǰ�����)
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:			//��default��ʾ����״���������else����
		printf("������� ������1-7\n");
		break;
	}
return 0;
}