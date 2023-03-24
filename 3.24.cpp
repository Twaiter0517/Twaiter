#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
char map[10][21] = {
	"#**#****##********#*",
	"#*##**##****##**#*#*",
	"#*#*#*******##**##**",
	"#*#*#***##******#***",
	"##***#******###*#***",
	"#***##*******##*#***",
	"***##**#**####***#**",
	"**##***#**#**#*###**",
	"*##*##*###***###****",
	"*#***###*****#****#P",
};
void printmap()
{
	int i, j;
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 20; j++)
			printf("%c", map[i][j]);
		printf("\n");
	}
}
int curX = 0, curY = 0;
void printperson()
{
	COORD pos;
	pos.X = curX;
	pos.Y = curY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("k");
}
void move(char dir)
{
	switch (dir)
	{
	case'w':
		curY--;
		if (curY < 0) curY++;
		if (map[curY][curX] == '*') curY++;
		break;
	case's':
		curY++;
		if (curY >= 10) curY--;
		if (map[curY][curX] == '*') curY--;
		break;
	case'a':
		curX--;
		if (curX < 0) curX++;
		if (map[curY][curX] == '*') curX++;
		break;
	case'd':
		curX++;
		if (curX >= 20) curX--;
		if (map[curY][curX] == '*') curX--;
		break;
	}
}
int main()
{
	system("color F3");
	char dir;
	while (1)
	{
		system("cls");
		printmap();
		printperson();
		dir =getch();
		move(dir);
		if (map[curY][curX] == 'P')
			break;
	}
	printf("πßœ≤ƒ„£¨Õ®πÿ¡À£°");
	return 0;
}
