#define _CRT_SECURE_NO_WARNINGS 1

					//�����ݹ� �����Լ���������  �ݹ�ֻ��Ҫ��������ʵ�ֶ������ ���ٴ�����
					//�ݹ���дʱ ����������,��Ȼ����ѭ����ջ���
					//�ݹ��������Ҫ����:
							//������������,�����������������ٵݹ�
							//ÿ�εݹ����֮��Խ��Խ�ӽ������������
//#include<stdio.h>
//
//void print(int n)
//{
//	if(n>9)					//if�����������������
//	{
//	print(n/10);//(��ĩβ���루123��>12 3   12�ָ���n��)
//	}
//	printf("%d	",n%10);//(��λ)
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