
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

using namespace std;

char vertice[4];

void aristas(char n1, char n2, int n);
void gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}


void impnodos() {
	
	char vertice[4] = { 'a','b','c','d' };

	for(int i = 0; i < 4; i++) {
		if (i < 2) {
			gotoxy(5, 2);
			cout << vertice[0];

			gotoxy(20, 2);
			cout << vertice[1];
		}
		else {
			gotoxy(5, 10);
			cout << vertice[2];

			gotoxy(20, 10);
			cout << vertice[3];

		}
	}
	cout << endl << endl;
	}



void relacion(int v1, int v2, int cont) {
	char vc1, vc2;
	int num = cont;
	switch (v1){
	case 0: 
		vc1 = 'a';
		break;
	case 1:
		vc1 = 'b';
		break;
	case 2:
		vc1 = 'c';
		break;
	case 3:
		vc1 = 'd';
		break;
	default:
		cout << "Error"<<endl;
		break;
	}
	switch (v2) {
	case 0:
		vc2 = 'a';
		break;
	case 1:
		vc2 = 'b';
		break;
	case 2:
		vc2 = 'c';
		break;
	case 3:
		vc2 = 'd';
		break;
	default:
		cout << "Error" << endl;
		break;
	}
	cout << "Aristas:"<<endl;
	cout << num <<" "<< vc1 << "-" << vc2 << endl; 
}

int main() {
	int Matriz[4][4] = {{0,1,1,0},{0,0,0,1},{1,0,0,0},{0,0,1,0}};
	int count=0;
	impnodos();
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (Matriz[i][j] == 1) {
				count++;
				relacion(i, j,count);	
			}
		}
	}
	getch();
}



