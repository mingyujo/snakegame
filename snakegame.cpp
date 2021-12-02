#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void gotoxy(int x, int y)
{

	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}



int main() {
	int map[25][25] = { 0, };
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			if (i == 0 || j == 0 || i == 24 || j == 24) map[i][j] = 1;
		}
	}

	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			if (map[i][j] == 1) printf("бр");
			else printf("  ");
		}
		printf("\n");
	}
	gotoxy(6, 15);
	printf("бр");
	gotoxy(4, 15);
	printf("бр");
	//printf("бр");
}