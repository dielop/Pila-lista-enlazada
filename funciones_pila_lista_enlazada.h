#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{    
    int dato;
    struct nodo* siguiente;
    
}pila;

pila* nuevonodo(int);
int Apila(pila **, int);
int Desapila(pila **);
void VaciaPila(pila **);
int Tamano(pila *);
int EstaVacia(pila *);
int top(pila *);
void ImprimirLista(pila*);




pila* nuevonodo(int dato)
{

    pila* nuevo = NULL;
    
       nuevo = (pila*)malloc(sizeof(pila));
       if( nuevo != NULL){
           nuevo -> dato = dato;
           nuevo -> siguiente = NULL;
       }

    return nuevo;
}

int Apila(pila** cima, int dato){
    pila* nuevo = NULL;
    nuevo = nuevonodo(dato);
    if(nuevo != NULL){
        nuevo -> siguiente = *cima;
        *cima = nuevo;
        return 1; 
    }

    return 0;
}

int Desapila(pila** p)
{
    if(EstaVacia(*p))
    {
        printf("La pila esta vacia.\n");
    }
    else
    {
        int i = (*p)->dato;
        pila * temp = *p;
        *p=(*p)->siguiente;
        free(temp);
        return i;
    }
}

void VaciaPila(pila** p)
{
    if(EstaVacia(*p))
    {
        printf("La pila esta vacia. \n");
    }
    else
    {
        pila * temp = *p;
        *p = (*p)->siguiente;
        free(temp);
        VaciaPila(p);
    }


}


int Tamano(pila * p)
{
    int i = 0;
    while(p)
    {
        i++;
        p = p->siguiente;
    }
    return i;
}

int EstaVacia(pila* p)
{
    if(p == NULL){
        return 1;
    }

    return 0; 
}

int top(pila* p)
{

    return p -> dato;

}

void ImprimirLista(pila* cima){
    pila *elemento = cima;

    while(elemento != NULL){
        printf("%d ", elemento->dato);
        elemento = elemento->siguiente;
    }
}



