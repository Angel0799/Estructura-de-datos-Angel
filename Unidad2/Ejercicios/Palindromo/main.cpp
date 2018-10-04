#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>

//pool diaz angel enrique
// 3-B sistemas C.
using namespace std;
void orden(string n,int p,string x)

 {
        if ( p==0)
        { x+=n[p];
        cout<<x<<endl;
        {if (x==n)
        {
            cout<<"si es palindromo";
        }
        else
        cout<<"no es palindromo";}

         }
       else
            {

            x+=n[p];
            p=p-1;
                orden(n,p,x);//se utiliza la recursividad por que la fucion esta  llamndose a si misma para pode ejecutar
            }
    }

int main()
{
       bool re=true;
        char n;
        do{
                system("cls");
        string cad;
        string eva;
        cout<<"Ingresa la Palabra:"<<endl;
        cin>>cad;
        cout <<"la palabra es:";
        int p=cad.size();
        p=p-1;
        string x="";

    orden(cad,p,x);

    cout<<endl<<"quieres continuar? S o N "<<endl;
    cin>>n;
    {if(n=='s')
    {
        re=true;
    }
    else {re=false;}
        }}
    while (re==true);
    return 0;
}


