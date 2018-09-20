#include "Ahorcado.h"
#include <string>
#include <iostream>
#include <time.h>
#include <vector>
#include <cstdlib>
using namespace std;

Ahorcado::Ahorcado()
{
    //ctor
}

string palabra_original;
string palabra_mostrar;
int vidas;


void Ahorcado::mein(){

    inicializar();
    mostrar();
    while(vidas>0 && palabra_mostrar!=palabra_original){
        char x;
        cin>>x;
        system("cls");
        ingresar(x);
        mostrar();
    }
    if(vidas>0){
            cout << "!!oh my god!!\n";
        cout << "!!lograste acertar ala palabra!!"<<endl;
    }else{
        cout << " !!PERDISTE!! YA LO MATASTE x_x!!";
        cout << "\n la palabra es: "<<palabra_original<<endl;
    }


}




void Ahorcado::mostrar(){

    cout << " JUEGO DEL AHORCADO" << endl;
    cout << endl<<endl;
    cout << "Vidas: "<<vidas<<endl;
    cout << palabra_mostrar<<endl;
}




void Ahorcado::ingresar(char x){
    bool perdividas=true;

    for(int i=0; i<palabra_original.length(); i++){
        if(x==palabra_original[i]){
            perdividas=false;
            palabra_mostrar[i]=x;
        }
    }

    if(perdividas) vidas--;
}



void Ahorcado::inicializar(){
        vidas = 6;
        palabra_original=obtener_palabra_aleatoria();


        for(int i=0; i<palabra_original.length() ; i++){
        if(palabra_original[i]>='A' && palabra_original[i]<='Z'){
            palabra_original[i]+=32;
        }
    }


    for (int j=0; j<palabra_original.length() ; j++){
        if(palabra_original[j]>='a' && palabra_original[j]<='z'){
            palabra_mostrar+='*';
        }else{
            palabra_mostrar+=palabra_original[j];
        }
    }
}



string Ahorcado::obtener_palabra_aleatoria(){
  int dato;

    vector<string>palabras;
    palabras.push_back("angel");
    palabras.push_back("te Amo");
    palabras.push_back("sky");
    palabras.push_back("funerarios");
    palabras.push_back("dialectalismo ");
    palabras.push_back("alejandro y frida ");
    palabras.push_back("windows");
    palabras.push_back("linux");
    palabras.push_back("lexo");
    palabras.push_back("winie");
    palabras.push_back("power ade");
    palabras.push_back("hotdogs");

    srand(time(NULL));
    dato = 0 + rand()%(12);

    return palabras[dato];
}
