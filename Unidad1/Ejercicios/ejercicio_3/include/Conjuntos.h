#ifndef CONJUNTOS_H
#define CONJUNTOS_H


class Conjuntos
{
    public:
        Conjuntos();

        int Getnumero() { return numero; }
        void Setnumero(int val) { numero = val; }
        int Getpos() { return poss; }
        void Setpos(int val) { poss = val; }

        int lista(int conjuntoA[], int conjuntoB[]);
        void ConjuntoVacio();
        int AnadirElemento(int conjunto[]);
        int PerteneceAlConjunto(int conjunto[]);
        int RetirarElemento(int conjunto[]);
        int Union(int conjuntoA[], int conjuntoB[]);
        int Interseccion(int conjuntoA[], int conjuntoB[]);
        int Diferencia(int conjuntoA[], int conjuntoB[]);

    protected:

    private:
        int numero;
        int poss;
};

#endif // CONJUNTOS_H
