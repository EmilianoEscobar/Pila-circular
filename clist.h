#ifndef CLIST_H
#define CLIST_H

#include "node.h"
#include <stdbool.h>

typedef struct _clist clist;

struct _clist{
    node *head;
    int num;//contador que nos dice el numero de elemntos
};

clist* create_list();
void delete_list(clist *l);

//funciones para agregar a la lista
bool add_init(clist *l, DATA data);//agergar al inicio
bool add_end(clist *l, DATA data);//agregar al final
bool add(clist *l, DATA data, int pos);//agregar por posicion

//funcion  para eliminar un dato
bool remove_data(clist *l, DATA data);//eliminar por posicion y nos regresa si elimino el dato

//funciones para eliminar por posicion 
DATA delete_init(clist *l);
DATA delete_end(clist *l);
DATA delete_data(clist *l, int pos);

//funcion para buscar en lista
int search_data(clist *l, DATA data);//regresa pos
DATA search_pos(clist *l, int pos);//regresa dato
node *search_node(clist *l, DATA data);//regresa un nodo donde se encuentra el node

node *ultimo (clist *l);
node *penultimo(clist *l);
node *actual(clist *l, int pos);
node *anterior(clist *l, int pos);

//imprimir lista
void print_list(clist *l);
bool is_empty(clist *l);
void empty(clist *l);

#endif


