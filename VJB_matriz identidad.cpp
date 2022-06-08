/*
  Programa elaborado por: Brandon Vazquez Juarez
  Nombre de los jugadores
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
main(){
	
	int matriz[4][4];
	
	for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 10; j++) {
                if (i==j) {
                    matriz[i][j]=1;
                }else{
                    matriz[i][j]=0;
                }
            }
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cout<<"En la posición ["<<i<<"]["<<j<<"] de la matriz se encuentra el valor de la matriz: "<<matriz[i][j]<<endl;
            }
        }
        getch();
}
