#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
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
	int status = 1;//1¿À 2¿Þ 3À§ 4¾Æ·¡
	int key,x=12,y=12;
	int map[25][25] = { 0, };
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			if (i == 0 || j == 0 || i == 24 || j == 24) map[i][j] = 1;
		}
	}
	draw_map(map);
	gotoxy(x, y);
	printf("¢Ã");
	while (1) {

		if (x == 0 || x == 48 || y == 0 || y == 25) {
			system("cls");
			printf("die");
			break;
		}

		if (_kbhit()) {
			key = _getch();
			if (key == 72) {
				gotoxy(x, y);
				printf("  ");
				y--;
				gotoxy(x, y);//up
				printf("¢Ã");
				status = 4;
			}
			else if (key == 80) {
				gotoxy(x, y);
				printf("  ");
				y++;
				gotoxy(x, y);
				printf("¢Ã");
				status = 3;
			}
			else if (key == 75) {
				gotoxy(x, y);
				printf("  ");
				x -= 2;
				gotoxy(x, y);
				printf("¢Ã");
				status = 2;
			}
			else if (key == 77) {
				gotoxy(x, y);
				printf("  ");
				x += 2;
				gotoxy(x, y);
				printf("¢Ã");
				status = 1;
			}
		}

		else {
			switch (status) {
			case 1: 
				gotoxy(x, y);
				printf("  ");
				x += 2;
				gotoxy(x, y);
				printf("¢Ã");
				break;
			case 2: 
				gotoxy(x, y);
				printf("  ");
				x -= 2;
				gotoxy(x, y);
				printf("¢Ã");
				break;
			case 3: 		
				gotoxy(x, y);
				printf("  ");
				y++;
				gotoxy(x, y);
				printf("¢Ã");
				break;
			case 4: 
				gotoxy(x, y);
				printf("  ");
				y--;
				gotoxy(x, y);
				printf("¢Ã");
				break;
			}
		}
		Sleep(400);
			//80down
			//75left
			//77right
	}

}