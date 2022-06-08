/*
  Programa elaborado por: Brandon Vazquez Juarez
  Calificaciones da forma
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

main(){
	int calif[10];
	int val=0;
	for(int i=0; i<10; i++){
		calif[i]=val+=2;
	}
	cout<<"-------------------------------------------------------- \n";
	for(int i=0; i<10; i++){
		cout<<"  Las calificacione del alumno ["<<i+1<<"] es: "<<calif[i]<<endl;
		}
		cout<<endl;
	cout<<"  Brandon Vazquez Juarez                  \n";
	cout<<"-------------------------------------------------------- \n";
	getch();
}
