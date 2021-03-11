#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "serpientesEscaleras.h"

//ArbolBinario *arbolBinario = (ArbolBinario*)malloc(sizeof(ArbolBinario)); 

void insertarListaPosicion(ListaPosiciones *lista, Posicion *pos){

    if(lista->primero == NULL){

        lista->primero = pos;
        lista->primero->sig = NULL;
        lista->ultimo = pos;

    }else{
        lista->ultimo->sig = pos;
        pos->sig = NULL;
        lista->ultimo = pos;
    }


}
void imprimirLista(ListaPosiciones *lista){

    Posicion *temp = (Posicion*)malloc(sizeof(Posicion)); 
    temp = lista->primero;
    while(temp != NULL){
        printf("%s\n", "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
        printf("%d", temp->pos);
        printf("%s\n", "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");

        temp = temp->sig;
    }
    
};

int isIn(ListaSerpienteOEscalera *lista, int num){
};

void crearSerpientesEscaleras(ListaSerpienteOEscalera *escaleras, ListaSerpienteOEscalera *serpientes, int cantidadEscalerasYSerpientes, int limite, int lenTablero){
    int repetidos[100];
    for(int i; i<cantidadEscalerasYSerpientes; i++){
        int random = rand()%(lenTablero*lenTablero);
    }



};

int main(){

    int lenTablero;
    int limite;
    int cantidadEscalerasYSerpientes;
    printf("Por favor ingrese el tamaño del tablero, será NxN\n");
    scanf("%d", &lenTablero);
    limite = (lenTablero*lenTablero)-5; 
    ListaPosiciones *posicionesTablero = (ListaPosiciones*)malloc(sizeof(ListaPosiciones)); 
    posicionesTablero->primero = NULL;
    posicionesTablero->ultimo = NULL;

    for(int i = 0; i<lenTablero*lenTablero; i++){
        Posicion *pos = (Posicion*)malloc(sizeof(Posicion));
        pos->pos = i;
        pos->sig = NULL;
        insertarListaPosicion(posicionesTablero, pos);
    };

    cantidadEscalerasYSerpientes = ((lenTablero*lenTablero)/5)*2;

    for(int i = 0; i<lenTablero*lenTablero; i++){
        Posicion *pos = (Posicion*)malloc(sizeof(Posicion));
        pos->pos = i;
        pos->sig = NULL;
        insertarListaPosicion(posicionesTablero, pos);
    };

    
    ListaSerpienteOEscalera *escaleras = (ListaSerpienteOEscalera*)malloc(sizeof(ListaSerpienteOEscalera));
    ListaSerpienteOEscalera *serpientes = (ListaSerpienteOEscalera*)malloc(sizeof(ListaSerpienteOEscalera));
    
    escaleras->primero = NULL;
    escaleras->ultimo = NULL;
    serpientes->primero = NULL;
    serpientes->ultimo = NULL;

    crearSerpientesEscaleras(escaleras, serpientes, cantidadEscalerasYSerpientes, limite, lenTablero);
    printf("Listo");
};