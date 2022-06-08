/*
  Programa elaborado por: Brandon Vazquez Juarez
  Nombre de los jugadores
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
main(){
	
	int a[3][2]={{1,2,5},{3,-4,7}};
	int at[2][3];
	for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                at[j][i]=a[i][j];
            }
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"la segunda matriz es"<<endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                cout<<at[i][j]<<" ";
            }
            cout<<endl;
        }
        getch();
}
