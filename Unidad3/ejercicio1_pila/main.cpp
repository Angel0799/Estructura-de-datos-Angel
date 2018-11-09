#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

/*pool diaz angel enrique
3 unidad
ejercicio 1
*/

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


        int main()
        {
            TPla pila = NULL;    // creamos  la pila que usaremos
            string caden;



            cout<<"\n programa que lee una sequencia de caracteres y los imprime en orden inverso,Usando una pila.\n\n";

            cout << " Ingrese Secuencia de Caracteres: \n ";
            getline(cin, caden);



            invertirCadena( pila, caden );

            cout << "\n\n Orden Inverso: \n" << caden  <<endl;

            cout<<"\n\n ";

            system("pause");

            return 0;
        }

