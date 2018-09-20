#ifndef AHORCADO_H
#define AHORCADO_H
#include <iostream>
#include <time.h>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

class Ahorcado
{
    public:
        Ahorcado();


        void mein();

        void mostrar();//orientar a objetos
        void ingresar(char x);//orientar a objetos;
        void inicializar();
        string obtener_palabra_aleatoria();

    protected:

    private:
};

#endif // AHORCADO_H
