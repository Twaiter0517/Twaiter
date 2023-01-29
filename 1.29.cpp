#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void menu()
{
	printf("***********************************\n");
	printf("******  1.play	  0.exit  *********\n");
	printf("***********************************\n");
}
void game()
{
	int guess;
	int ret;
	ret = rand() % 100 + 1;
	printf("%d", ret);
	while (1)
	{
		printf("please guess the numble(1-100)\n");
		scanf("%d", &guess);
		if (guess < ret)

		{
			printf("higher\n");
		}
		else if (guess > ret)
		{
			printf("lower\n");
		}
		else

		{
			printf("sucessed!\n");
			break;
		}
	}
}





int main()
{
	system("color F3");
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("input the numble>:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("take off the game\n");
			break;
		default:
			printf("input error\n");
		}





	} while (input);
	return 0;
}