#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//¡Ü 
void gotoxy(int x, int y)
{

	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void draw_map(int ma[25][25]) {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			if (ma[i][j] == 1) printf("¡à");
			else if (ma[i][j] == 2) printf("¢Ã");
			else if (ma[i][j] == 3) printf("¡à");
			else if (ma[i][j] == 4) printf("¡Ü");
			else printf("  ");
		}
		printf("\n");
	}
}

int main() { //head2 body3
	int apple_x=20,apple_y=13,eat=0;
	int head_x=13, head_y=13;
	int map[25][25] = { 0, };
	map[head_x][head_y] = 2;
	map[13][12] = 3;
	map[13][11] = 3;
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			if (i == 0 || j == 0 || i == 24 || j == 24) map[i][j] = 1;
		}
	}

	while (1) {
		if (eat) {
			apple_x = rand() % 24 + 1;
			apple_y = rand() % 24 + 1;
			map[apple_y][apple_x] = 4;
		}

	}
}