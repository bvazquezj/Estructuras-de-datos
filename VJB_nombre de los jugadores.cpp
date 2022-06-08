/*
  Programa elaborado por: Brandon Vazquez Juarez
  Nombre de los jugadores
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstring>

using namespace std;

main(){
	string nombres[6];//={puyol, kaka, roberto C, Cristiano, Messi, Villa}
	string busqueda;
	int i, num=0;
	for(i=0; i<6; i++){
		cout<<"Ingresa el nombre del jugador "<<i+1<<endl;
		cin>>nombres[i];
	}
	
	for(i=0; i<6; i++){
		cout<<"En la posiscion  "<<i+1<<" se encuentra el jugador "<<nombres[i]<<endl;
	}
	cin>>busqueda;
	while((num==0)&&(i<6)){
		if(nombres[i] == busqueda){
			num=1;
		}
		i++;
	}
	
	if(num==0){
		cout<<"El jugador "<<busqueda<<" no esta en el arreglo"<<endl;
	}else if(num==1){
		cout<<busqueda<<" esta en la posicion "<<i<<endl;
	}
	cout<<" \n";
	cout<<endl;
	cout<<"  Brandon Vazquez Juarez                  \n";
	cout<<"----------------------------------------- \n";
	getch();
}











