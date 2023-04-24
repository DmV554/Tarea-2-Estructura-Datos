#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h> 
#include "Map.h"
#include "list.h"
#include "stack.h"

typedef struct{
    char nombre[51];
    int puntosHabilidad;
    List* inventario;
    Stack*pilaAcciones;
}Jugador;

typedef struct{
  char nombre[51];
  List* listaJugadoresConItem;
}ItemMapa;

typedef struct {
  char nombre[51];
} Item;

typedef struct {
char nombreAccion[51];
char item[51];
}Accion;

/*
  función para comparar claves de tipo string
  retorna 1 si son iguales
*/
int is_equal_string(void * key1, void * key2) {
    if(strcmp((char*)key1, (char*)key2)==0) return 1;
    return 0;
}

/*
  función para comparar claves de tipo string
  retorna 1 si son key1<key2
*/
int lower_than_string(void * key1, void * key2) {
    if(strcmp((char*)key1, (char*)key2) < 0) return 1;
    return 0;
}

/*
  función para comparar claves de tipo int
  retorna 1 si son iguales
*/
int is_equal_int(void * key1, void * key2) {
    if(*(int*)key1 == *(int*)key2) return 1;
    return 0;
}

/*
  función para comparar claves de tipo int
  retorna 1 si son key1<key2
*/
int lower_than_int(void * key1, void * key2) {
    if(*(int*)key1 < *(int*)key2) return 1;
    return 0;
}


int main() {
 
    return 0;
}

