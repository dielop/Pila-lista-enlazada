#include <stdio.h>
#include <stdlib.h>
#include "funcionestp2.h"



int main ()
{
    pila * cima = NULL;

    if(EstaVacia(cima)==1){
        printf("La lista esta vacia\n");
    }else{
        printf("La lista no esta vacia.\n");
    }

    Apila(&cima, 5);
    Apila(&cima, 4);
    Apila(&cima, 3);
    

    ImprimirLista(cima);

    printf("\nTamaño de la pila es: %d\n", Tamano(cima));
    printf("El dato de la cima de la pila es: %d\n", top(cima));

    if(EstaVacia(cima)==1){
        printf("La lista esta vacia\n");
    }else{
        printf("La lista no esta vacia.\n");
    }

    Apila(&cima, 2);
    printf("Inserta dato: ");
    ImprimirLista(cima);
    Apila(&cima, 1);
    printf("\nInserta dato: ");
    ImprimirLista(cima);
    
    
    printf("\nDato 2 insertado que extrae: %d\n", Desapila(&cima));
    ImprimirLista(cima);
    printf("\nDato 1 insertado que extrae: %d\n", Desapila(&cima));
    
    
    
    ImprimirLista(cima);
    printf("\nTamaño de la pila es: %d\n", Tamano(cima));
    


 return 0;   
}

