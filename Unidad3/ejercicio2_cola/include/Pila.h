#include <iostream>
    class Pila
    {

        class NodoPila
        {
        public:
            NodoPila* siguien;
            int elemen;
            NodoPila(int x)
            {
                elemen= x;
                siguien = NULL;
            }
        };

        NodoPila* cima;
        public:
        Pila ()
        {
            cima = NULL;
        }
        void insertar(int elemen);
        int mostrar();
        int cimaPila();
        int pilaVacia();
    };
