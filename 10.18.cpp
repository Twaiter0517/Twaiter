#define _CRT_SECURE_NO_WARNINGS 1
//struct Book
//{
//	char name[20];
//	short price;
//	char nofw[10];	//(char�ַ������Ҫ��[])
//};
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	struct Book b1={"c���Գ������",55,"����"};
//	b1.price=15;//(�޸�����)
//	strcpy(b1.nofw,"����"); //(�޸�����������ΪpriceΪ���ζ�nofwΪ�ַ������Բ���������һ��ֱ���޸ģ���Ҫ�õ�strcpy����������Ϊ�ǿ⺯��������Ҫ���ͷ�ļ���string.h��)
//	printf("����:%s\n",b1.name);
//	printf("�۸�:%d\n",b1.price);
//	printf("������:%s\n",b1.nofw);
//	//����pb��ӡ�����ͼ۸�
//	//	.�ṹ�����.��Ա(��һ��)
//	//	 �ṹ��ָ��->��Ա(�ڶ���)
//
//	struct Book* pb=&b1;
//	printf("%s\n",(*pb).name);		//����һ�֣�
//	printf("%d\n",(*pb).price);	
//		printf("%s\n",(*pb).nofw);
//	printf("%s\n",pb->name);		//(�ڶ���)
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
//	struct Book b1={"c���Գ������","����",55};
//	b1.price=15;
//	strcpy(b1.nofw,"����");
//	printf("����:%s\n",b1.name);
//	printf("������:%s\n",b1.nofw);
//	printf("�۸�:%d\n",b1.price);
//
//	struct Book* pb=&b1;
//	printf("����:%s\n",b1.name);
//	printf("����:%s\n",(*pb).name);
//	printf("������:%s\n",(*pb).nofw);
//	printf("�۸�:%d\n",(*pb).price);
//
//	printf("����:%s\n",pb->name);
//	printf("������:%s\n",pb->nofw);
//	printf("�۸�:%d\n",pb->price);
//return 0;
//}
//
