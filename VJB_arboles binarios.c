#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


struct nodoarbol{                       
         struct nodoarbol *izqnodo;
         int info;
         struct nodoarbol *dernodo;
         };
typedef struct nodoarbol NODO;    
typedef NODO *ARBOL;               


void insertanodonuevo(ARBOL *,int);    
void inorden(ARBOL);
void preorden(ARBOL);
void postorden(ARBOL);
void treefree(ARBOL);

int main(){
int i;                          
char newnod,chain[200],elementos;    
ARBOL raiz=NULL;                
printf("\n\n\tIntroduzca una cadena de caracteres (max. 200 elementos):\n");
gets(chain);
elementos=strlen(chain);         
for(i=1;i<=elementos;i++)  
       newnod=chain[i-1];
     insertanodonuevo(&raiz,newnod);

}
printf("\n\npreorden ");
preorden(raiz);                 
printf("\n\n inorden ");
inorden(raiz);                  
printf("\n\n postorden");
postorden(raiz);                
getch();
treefree(raiz);            
raiz=NULL;                  
return 0;
}


void insertanodonuevo(ARBOL *rarbol,int nuevo){
 if(*rarbol==NULL){                          
 *rarbol=(NODO *)malloc(sizeof(NODO));
 if(*rarbol!=NULL){
             
 (*rarbol)->info=nuevo;
 (*rarbol)->izqnodo =NULL;
 (*rarbol)->dernodo=NULL;
 }
 else{printf("\nญญญญ Memoria No Disponible !!!!\n");}
 }
 else
         if(nuevo<(*rarbol)->info)  
                 insertanodonuevo(&((*rarbol)->izqnodo),nuevo);  
         else
                 if(nuevo>(*rarbol)->info)  
                          insertanodonuevo(&((*rarbol)->dernodo),nuevo); 
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
