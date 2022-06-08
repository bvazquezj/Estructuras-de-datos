#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

using namespace std;

void gotoxy(int x, int y){
	HANDLE hcon;
	hcon= GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
}

struct nodo{
	char n;
	nodo *sig;
}
*aux,*aux1,*aux2;

aux=new (struct nodo);
aux=NULL;

void nodos(){
	char vertice[4]={'a','b','c','d'};
	
	for(int i=0; i<4; i++){
		if(i<2){
		gotoxy(5,2);
		cout<<vertice[0];
		gotoxy(20,2);
		cout<<vertice[1];
		}else{
			gotoxy(5,10);
			cout<<vertice[2];
			gotoxy(20,10);
			cout<<vertice[3];
		}
	}
	cout<<endl<<endl;
}

int main(){
	
	int Matriz[4][4]={{0,1,1,0},{0,1,0,0},{0,0,0,1},{0,0,1,0}};
	nodos();
	for(int i=0; i<4;i++){
		for(int j=0;j<4;j++){
			cout<<Matriz[i][j];
		}
		cout<<endl;
	}
	
	getch();
}
