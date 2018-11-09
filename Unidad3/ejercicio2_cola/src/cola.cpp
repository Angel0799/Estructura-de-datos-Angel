#include "cola.h"

//declaracion de funcion para encolar los datos que se apilaron en una pila

    void Cola :: insertar(int elemento)
    {
        NodoCola* nuevo;
        nuevo = new NodoCola (elemento);
        if (colaVacia())
        {
            frente = nuevo;
        }
        else
        {
            final -> siguien= nuevo;
        }
        final = nuevo;
    }

    //funcion que se usa poara mostrar los datos encolados a partir del ultimo elemento apilado
    int Cola :: mostrar()
    {
        if (colaVacia())
            throw "Cola vac�a, no se puede extraer.";
        int aux = frente -> elemen;
        NodoCola* a = frente;
        frente = frente -> siguien;
        delete a;
        return aux;
    }

    int Cola :: frenteCola()
    {
        if (colaVacia())
            throw "Cola vac�a";
        return frente -> elemen;
    }



    int Cola :: colaVacia()
    {
        return frente == NULL;
    }
