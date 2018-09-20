#include "Conjuntos.h"
#include <iostream>
#include<process.h>
#include <stdlib.h>

using namespace std;

Conjuntos::Conjuntos()
{
    //ctor
}

int Conjuntos::lista(int conjuntoA[],int conjuntoB[])
{
     int arco;
     int num=7;
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++) {
            if(conjuntoA[i]>conjuntoA[j]){
                arco=conjuntoA[i];
                conjuntoA[i]=conjuntoA[j];
                conjuntoA[j]=arco;
            }
        }
    }
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++) {
            if(conjuntoB[i]>conjuntoB[j]){
                arco=conjuntoB[i];
                conjuntoB[i]=conjuntoB[j];
                conjuntoB[j]=arco;
            }
        }
    }
    cout<<"LISTA ORDENADA DE LOS ELEMENTOS DEL"<<endl<<endl;
    cout << " CONJUNTO A"<< "\t\t CONJUNTO B"<<endl;
    for (int i=0;i<num;i++){
       cout<<conjuntoA[i]<< "\t\t\t\t"<<conjuntoB[i]<<endl;
    }
}

int Conjuntos::Union(int conjuntoA[], int conjuntoB[])
{
    int arco;
    int num=7;
    int conjuntoC[num+num];
    int i, j, k,c, flag;

       k=0;
    for(i=0;i<num;++i){
        conjuntoC[k]=conjuntoA[i];
        k++;
    }
    for(i=0;i<num;++i){
        flag=1;
        for(j=0;j<num;++j){
            if(conjuntoB[i]==conjuntoA[j]){
                flag=0;
                break;
            }
        }
        if(flag){
            conjuntoC[k]=conjuntoB[i];
            k++;
        }
    }
    for(i=0;i<k;++i){
        conjuntoC[i];
    }

    for(i=0;i<k;++i)
        for(j=i+1;j<k;)
        {
            if(conjuntoC[i]==conjuntoC[j])
            {
                for(c=j;c<k-1;++c)
                    conjuntoC[c]=conjuntoC[c+1];

                --k;
            }
            else
                ++j;
        }
    cout<<"\nUnion de los dos conjuntos:\n";
    cout<<"\n";
    for(i=0;i<k;++i)
        cout<<conjuntoC[i]<<" ";
}

int Conjuntos::Interseccion(int conjuntoA[], int conjuntoB[])
{
    cout << "la interseccion del conjunto A y B es\n"<<endl;
    int num=7;
    int p=0, q=0;
    while ( p <= num && q <= num ) {

      if ( conjuntoA [ p ] < conjuntoB [ q ]) {

         p ++;

      } else if ( conjuntoB [ q ] < conjuntoA [ p ]) {

         q ++;

      } else if ( conjuntoA [ p ] == conjuntoB [ q ]) {

         cout << conjuntoA [ p ] << "  " ;

         p ++;
         q ++;

      }

   }

}

int Conjuntos::Diferencia(int conjuntoA[], int conjuntoB[])
{
    int num=7;
    int conjuntoC[num], conjuntoD[num],conjuntoE[num];
    int i,j,in=0,u=0,s=0,cont;

      for(i=0;i<num;i++)
        {
            conjuntoC[u]=conjuntoA[i];
            u++;
        }

        for(i=0;i<num;i++)
        {
        cont=0;
            for(j=0;j<num;j++)
                if(conjuntoB[i]==conjuntoA[j]){
                cont=1;
                break;
                }
                if(cont==0){
                conjuntoC[u]=conjuntoB[i];
                u++;
                }
        }

        for(i=0;i<num;i++)
            for(j=0;j<num;j++)
                if(conjuntoA[i]==conjuntoB[j]){
                    conjuntoD[in]=conjuntoA[i];
                    in++;
                }

        for(i=0;i<u;i++)
        {
            cont=0;
            for(j=0;j<in;j++)
                if(conjuntoC[i]==conjuntoD[j])
                    {
                    cont=1;
                    break;
                    }
                if(cont==0)
                    {
                    conjuntoE[s]=conjuntoC[i];
                    s++;
                    }

 }
cout<<"LA DIFERENCIA SIMETRICA ES:"<<endl;
int arco;
for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++) {
            if(conjuntoE[i]>conjuntoE[j]){
                arco=conjuntoE[i];
                conjuntoE[i]=conjuntoE[j];
                conjuntoE[j]=arco;
            }
        }
    }
for(i=0;i<s;i++)
cout<<conjuntoE[i]<<" ";
}

int Conjuntos::PerteneceAlConjunto(int conjunto[])
{
    int num=7;
    int ban=0;
    for(int i=0; i<num; i++){
        if(Getnumero()==conjunto[i])
            {
            ban=1;
            cout<<endl<<"el numero "<<Getnumero()<<" se encuentra en la posicion: "<<" ["<<i+1<<"] "<<endl;
            break;
            }else{
                ban=0;
                }
    }

    if(ban==0){
        cout<<endl<<endl<<"el numero no se encuentra en el arreglo"<<endl;
    }
}
