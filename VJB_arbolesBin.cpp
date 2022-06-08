                                       //declara librerias
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 

struct nodoarbol{                      //Estructura arbol
         struct nodoarbol *izqnodo;
         int info;
         struct nodoarbol *dernodo;
         };
typedef struct nodoarbol NODO;         
typedef NODO *ARBOL;                    
 

void insertanodonuevo(ARBOL *,int);    //Funciones
void inorden(ARBOL);
void preorden(ARBOL);
void postorden(ARBOL);
void treefree(ARBOL);
 
main(){
int i;                                  //entero i
char newnod,chain[200],elementos;       //caracter, flag y el valor del arbol

ARBOL raiz=NULL;                        //declara el arbol
printf("Brandon Vazquez Juarez");
printf("\n\n\tIntroduzca una cadena de caracteres (max. 200 elementos):\n");
gets(chain);
elementos=strlen(chain);                //establece el numero de nodos
for(i=1;i<=elementos;i++)  {
       newnod=chain[i-1];
     insertanodonuevo(&raiz,newnod);
 
}
printf("\n\n preorden ¯¯\t");
preorden(raiz);                         //llama a la funcion preorden
printf("\n\n inorden  ¯¯\t");
inorden(raiz);                          //llama a la funcion inorden
printf("\n\n postorden ¯¯\t");
postorden(raiz);                        //llama a la funcion preorden
getch();
treefree(raiz);                         //limpia memoria arbol
raiz=NULL;                              //elimina los valores de la raiz
return 0;
}
 
void insertanodonuevo(ARBOL *rarbol,int nuevo){ // funcion crea nuevo nodo
 if(*rarbol==NULL){                          
 *rarbol=(NODO *)malloc(sizeof(NODO));
 if(*rarbol!=NULL){
                                                //asigna valores nuevo nodo
 (*rarbol)->info=nuevo;
 (*rarbol)->izqnodo =NULL;
 (*rarbol)->dernodo=NULL;
 }
 else{printf("\n Memoria No Disponible !!!!\n");}
 }
 else
         if(nuevo<(*rarbol)->info)  
                 insertanodonuevo(&((*rarbol)->izqnodo),nuevo);  //coloca el elemento a la izquierda del padre o raiz
         else
                 if(nuevo>(*rarbol)->info)  
                          insertanodonuevo(&((*rarbol)->dernodo),nuevo);  //coloca el elemento a la derecha del padre o raiz
}

void preorden(ARBOL rarbol){
if(rarbol!=NULL){
printf(" %c ",rarbol->info);
preorden(rarbol->izqnodo);
preorden(rarbol->dernodo);
 
}
}
void inorden(ARBOL rarbol){
if(rarbol!=NULL){
inorden(rarbol->izqnodo);
printf(" %c ",rarbol->info);
inorden(rarbol->dernodo);
 
}
 
}

void postorden(ARBOL rarbol){
if(rarbol!=NULL){
postorden(rarbol->izqnodo);
postorden(rarbol->dernodo);
printf(" %c ",rarbol->info);
}
}

void treefree(ARBOL rarbol){
if(rarbol!=NULL){
treefree(rarbol->izqnodo);
treefree(rarbol->dernodo);
free(rarbol);
}

}
