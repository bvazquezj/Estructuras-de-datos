//programa echo por Brandon Vazquez Juarez
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstring>

using namespace std;
	string cola[7],dato;
	int frente=0, final=0, flag;
	int push(int final,  string dato);
 	int pop (int frente);
 	void show();
 	
main(){
 
	do{
	cout<<"Brandon Vazquez Juarez"<<endl;
	cout<<"Selecciona una opcion "<<endl;
	cout<<"a) introducir dato 0"<<endl;
	cout<<"b) eliminar dato 1"<<endl;
	cin>>flag;	
	switch(flag){
		case 0: 
			 cout<<"introdusca el valor a ingresar"<<endl;
			 cin>>dato;
			 final=push(final,dato);
			 show();
			break;
		case 1: 
			 frente=pop(frente);
			 show();
			break;
		default:
			cout<<"introduce un valor valido"<<endl;
			
	}
	}while(flag<2);
	getch();
}

int push (int Final, string dato){
if(Final < 7){
	cola[Final]=dato;
	Final++;
	}else{
		cout<<"La cola esta llena"<<endl;
	}
return Final;
}

int pop (int Frente){
if((final==frente) && (cola[frente].empty())){
	cout<< "La cola esta vacia";
}else{
	cola[Frente]="";
	Frente++;
	}
	return Frente;
}

void show(){
	cout<<"mostrando valores de la cola"<<endl;
	
	if(final == frente && cola[frente].empty()){
       cout<< "La cola esta vacia"<<endl;
	}else{
	   for(int i=0; i<7;i++){
          cout<<endl;
          cout<<cola[i];	
	}
	}
	getch();
}






