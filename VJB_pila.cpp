//progrma elaborado por Brandon Vazquez Juarez
// programa pila

#include <stdio.h> //declara librerias
#include <stdlib.h>

int push(char val, int tope); //declara la funcion push recibe un char y un entero
int pop(int tope); //declara la funcion pop que recibe un entero

char pila[6],aux; //declara las variables y la pila
int tope=0, n=6; //declara el tope y su limite
int opc,des=1,i=0; //decclara la opcion y el valor introducido por el usuario
char val; //declara el valor que sera añadido a la pila

void menu(){ //crea la funcion menu 
	printf("¿que deseas hacer? \n 1) agregar \n 2) quitar \n 3) mostrar \n"); //imprime las opciones
	scanf("%d",&opc); //recibe la opcion ingresada por el usuario
}

int push(char val,int tope){ //inicializa la funcion push 
	if(tope<n){ //usa una condicion donde si tope es menor a n 
		pila[tope]=val; //asignara val a tope
		tope++; // y el tope incrementara en 1
	}else{ //si no se cumple
		printf("pila llena\n"); //manda un mensaje que la pila esta llena
	}
	return tope; //retorna el valor te tope
}

int pop(int tope){ //inicializa la funcion pop 
	if(tope>0){ //si tope es mayor a 0 entonces
		tope--; // se le resta 1 a tope
		aux=pila[tope]; //se le asiga a auxiliar el valor de la pila de la ultima pocicion
		pila[tope]=NULL; //se borra el valor en la pila
	}else{ //si no se cumple
		printf("pila vacia \n"); //manda un mensaje que la pila esta vacia
	}
	return tope; //retorna el valor de tope
}

void mostrar(){ //inicializa la funcion mostrar 
	for(i=tope;i>=0;i--){ // i es igual a tope mientras i sea mayor o igual a 0 se le resta 1 a i
		printf("%c \n",pila[i]); //se imprime el valor de la pila en la posicion i
	}
	system("PAUSE"); //pausa el sistema 
}

int main(){ //metodo main o principal
	do{ //declara un bucle do while 
		menu(); // llama a la funcion menu
		switch(opc){ //declara un switch que recibe la opcion
			case 1: //si opc es 1 
				printf("Dame el valor para ingresar \n"); //se imprime el mensaje 
				scanf("%s",&val); //se pide el valor a ingresar al usuario
				tope=push(val,tope); //se le asigna a tope la funcion push y se le asigna el valor intuducido por el usuario y el tope
				break; //se rompe el caso
			case 2: //si opc es 2 
				tope=pop(tope); //se le asigna a tope el valor de la funcion pop se asigna el valor de tope
				break; //se rompe el caso
			case 3: // si opc es 3
				mostrar(); //se llama a la funcion mostrar
				break; //se rompe el caso
			default: //si opc tiene un valor difernete de los otros casos
				printf("\n Opcion invalida"); //muestra el mensaje opcion invalida
				break; //se rompe el caso
		} 
		printf("¿Deseas hacer otra operacion? \n1) si \n2) no\n"); //se imprime las opciones
		scanf("%d",&des); //se recibe la opcion introducida por el usuario
	}while(des==1); //si des es igual a 1 se termina el bucle do while
	system("PAUSE"); //pausa al sistema
	return 0; //finaliza el programa
}





