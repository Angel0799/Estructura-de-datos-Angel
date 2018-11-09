#include <iostream>
#include "Pila.h"
#include "Cola.h"
#include "stdlib.h"

using namespace std;

    int f,g,h,i,j,k,l,m;

    void pila()
    {

        Pila la;

        la.insertar(f);
        la.insertar(g);
        la.insertar(h);
        la.insertar(i);
        la.insertar(j);
        la.insertar(k);
        la.insertar(l);
        la.insertar(m);

        cout<<"\n    pila \n\n";
        cout<<"\t"<<la.mostrar()<<"\n\n";
        cout<<"\t"<<la.mostrar()<<"\n\n";
        cout<<"\t"<<la.mostrar()<<"\n\n";
        cout<<"\t"<<la.mostrar()<<"\n\n";
        cout<<"\t"<<la.mostrar()<<"\n\n";
        cout<<"\t"<<la.mostrar()<<"\n\n";
        cout<<"\t"<<la.mostrar()<<"\n\n";
        cout<<"\t"<<la.mostrar()<<"\n\n";
        //cout<<"\n  base de la pila \n\n";
    }

    void cola()
    {
        Cola c1aa;

        c1aa.insertar(f);
        c1aa.insertar(g);
        c1aa.insertar(h);
        c1aa.insertar(i);
        c1aa.insertar(j);
        c1aa.insertar(k);
        c1aa.insertar(l);
        c1aa.insertar(m);
        cout<<"   COLA  ";
        //cout<<"\n\nEncolar Final->\t";
        cout<<"\n"<<c1aa.mostrar()<<"\t";
        cout<<c1aa.mostrar()<<"\t";
        cout<<c1aa.mostrar()<<"\t";
        cout<<c1aa.mostrar()<<"\t";
        cout<<c1aa.mostrar()<<"\t";
        cout<<c1aa.mostrar()<<"\t";
        cout<<c1aa.mostrar()<<"\t";
        cout<<c1aa.mostrar()<<"\t\n";
       //cout<<" <-Encolar Inicio\n";

    }


    int main()
    {
        //int n;
        cout << "B)implementacion donde a partir de una pila se llene una cola.\n\n" ;
        //cout << "ingrese la cantidad de numeros ";

        //for (int i=0 i<10 i++ )
        cout<<"ingrese 8 valores numericos enteros:\n";
        cin>>f>>g>>h>>i>>j>>k>>l>>m;

        pila();
        cola();
        return 0;
    }

     struct nodo{
              char dat;
              struct nodo *te;
        };

        typedef struct nodo *TPla;

          // es la Creacion del Nodo

        TPla crearNodo(char ex)
        {
              TPla newNodo = new(struct nodo);
              newNodo->dat = ex;
              return newNodo;
        }


        //debajo se  Apila

        void push(TPla &top, char x)
        {
             TPla aux = crearNodo(x);
             aux->te = top;
             top = aux;
        }


        //despues se Desapila

        char pop(TPla &top)
        {
             int pi;
             TPla aux;

             aux = top ;
             pi = aux->dat;   // asignacion del primer valor de la pila
             top = aux->te ;
             delete(aux);
             return pi;
        }
        // invertimos la cadena

        void invertirCadena( TPla &p, string &cad )
        {
             // funcion para el copiado de caracteres a la pila
             for(int i=0; i<cad.size(); i++)
                  push(p, cad[i]);

             // Desapilacion y remplanzando de caracteres en la cadena
             for(int i=0; i<cad.size(); i++)
                  cad[i] = pop( p );

        }




