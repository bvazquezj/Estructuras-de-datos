//Brandon Vazquez Juarez

#include <iostream>
using namespace std;

char inf[]={"A/B*C/D/E^F"}; 
char pila[6];
char posf[11],posfi[11]; 
int tope=0, n=6;

int push (char val, int tope){

	if(tope<n){

		pila[tope]=val;

		tope++;
	}else{

		cout<<"Pila llena\n";
	}
	
	return tope;
}

int pop(int tope){
	if(tope>0){ 
	tope--; 
	pila[tope]=NULL;
	}else{
		cout<<"Pila vacia\n";
	}
	return tope;
}

int main(){
	cout<<"Realizado por Brandon Vazquez Juarez"<<endl;
	int j=0,k=0,l=0,m=0; 

	
	cout<<"La expresion infija es: ";
	for(int i=0;i<=10;i++){
		cout<<inf[i]; 
	}
	cout<<endl;
	for(int i=0;i<=10;i++){
	if(inf[i]=='/' || inf[i]=='*' || inf[i]=='^'){ 
	pila[j]=inf[i];j+=1;}
	else if(inf[i]=='A' || inf[i]=='B' || inf[i]=='C' || inf[i]=='D' || inf[i]=='E' || inf[i]=='F' ){
	posf[k]=inf[i];
	k+=1;
	}
	}
	
	cout<<endl<<"Las variables que se almacenan directamente en la expresion postfija son: ";
	for(int k=0;k<=5;k++){
		cout<<posf[k]; 
	}
	cout<<endl;
	cout<<endl<<"Los operadores que se van almacenando en la pila son: ";
	for(int j=0;j<=4;j++){
		cout<<pila[j];
	}
	cout<<endl;
	for(int i=0;i<=10;i++){
	if(inf[i]=='A' || inf[i]=='B' || inf[i]=='C' || inf[i]=='D' || inf[i]=='E' || inf[i]=='F' ){
		if(posfi[l]=='/' || posfi[l]=='*' || posfi[l]=='^'){ 
			l+=1; 
		}
		posfi[l]=inf[i];
		l+=1;
	}else if(inf[i]=='/' || inf[i]=='*' || inf[i]=='^'){
		tope=push(inf[i],tope); 
		posfi[l+1]=pila[tope-1];
		tope=pop(tope);
	}
	}
	
	cout<<endl<<"La expresion postfija es: ";
	for(int j=0;j<=10;j++){
		cout<<posfi[j];
	}
	
	cout<<endl;
	system("pause");
	
}
