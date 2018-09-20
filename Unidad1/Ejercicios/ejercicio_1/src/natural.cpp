#include "natural.h"
#include <iostream>
using namespace std;

natural::natural()
{
    //ctor
}

int natural::antecesor(int numeros[5]){
   int ant;

    for(int i=0; i<=4; i++)
    {
        if(numeros[i]>0)
        {
        cout<<"El antecesor de "<<numeros[i]<<" es "<<numeros[i]-1<<endl;
        }
       else
        {
            cout <<"el numero "<<numeros[i]<<" sin antecesor\n";
        }
    }


}

int natural::sucesor(int numeros[5]){
   int ant;

    for(int i=0; i<=4; i++)
    {
        if(numeros[i]>=0)
        {
        cout<<"El Sucesor de "<<numeros[i]<<" es "<<numeros[i]+1<<endl;
        }
       else
        {
            cout <<"el numero "<<numeros[i]<<" no tiene antecesor\n";
        }
    }
}


int natural::suma(int numeros[5]){
    int sum =0;
    for(int i=0; i<=4; i++){
        sum += numeros[i];
    }
    return sum;
}

int natural::menor(int numeros[5]){
    int me=numeros[0];
    for(int i=0; i<=4; i++){
        if(numeros[i+1]<me)
            me = numeros[i+1];
        }
    return me;
}
