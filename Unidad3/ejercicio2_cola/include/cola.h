#include<iostream>

    class Cola
    {
    protected:
        class NodoCola
        {
        public:
            NodoCola* siguien;
            int elemen;
            NodoCola (int x)
            {
                elemen = x;
                siguien = NULL;
            }
        };
        NodoCola* frente;
        NodoCola* final;
    public:
        Cola()
        {
            frente = final = NULL;
        }
        void insertar(int elemen);
        int mostrar();
        int frenteCola();
        int colaVacia();

    };
