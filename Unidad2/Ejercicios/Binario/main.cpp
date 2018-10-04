#include <iostream>
#include <stdio.h>
#include <cstdlib>

    using namespace std;
    void binario(int p);

    int main()
    {
          int dcmal;
        char n;
        bool res=true;
       do{
            system("cls");
       do {
            cout<<"digite el numero entero:"<<endl;
            cin>>dcmal;
            cout << "el entero en binario es: ";//señala en binario
        }while (dcmal<0);
        binario(dcmal); //pasando decimal a la funcion recursiva

        cout<<"\nquiere ingresar otro entero? S o N"<<endl;
        cin>>n;
        if (n=='s') res=true; //condicion de miestras
        else {
        res=false;}
       }while(res==true);

        return 0;
    }

    void binario(int p)
    {
        if (p>1) binario(p/2); //metodo recursivo en funcion
            cout<<p%2;
    }

