#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>			//(һ��switch������ϰ����m��n���ֵ)
//int main()
//{
//	int n=1;	//��ȡֵ�����ֺ�����ָ�ӵڼ���������룩
//	int m=2;
//	switch(n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch(n)	//(switch����Ƕ��ʹ�ã�
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

//ѭ�����  

//
//#include<stdio.h>
//int main()
//{
//	while(1)
//		printf("����sb!\n");
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
	// (continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue����Ĵ��벻����ִ�У�����ֱ����ת��while�����жϲ��֣�������while�ĵط���������һ��ѭ��������ж�)
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
	while ((ch = getchar()) != EOF)//(EOF=end of file)(����Ҫ��ֹѭ������Ctrl+z)
	{
		putchar(ch);
	}

	return 0;
}