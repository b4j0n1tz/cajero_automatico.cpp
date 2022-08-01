// Simulador de un cajero automatico

#include<iostream>

using namespace std;

int main(){

    int numero,saldo = 2000,respuesta1,respuesta2;

    cout<<"\nSaldo actual: "<<saldo<<endl;  //saldo actual en el banco
    cout<<"\n(1) Retirar dinero o (2) ingresar dinero: "; cin>>respuesta1;  //tenemos que elegir si retirar o ingresar dinero en el banco

    while (0 == 0){ //creamos un bucle infinito para que no acabe hasta que dejemos de hacer transacciones en el banco

        switch (respuesta1){    //creamos un switch con las dos opciones (retirar e ingresar)

            case 1: //caso para retirar dinero
    
            cout<<"\nDigite la cantidad de dinero que quiera retirar del banco: ";cin>>numero;

            if (numero < saldo){    //solo podremos retirar el dinero que tengamos en el banco

                saldo -= numero;
                cout<<"\nSaldo actual: "<<saldo<<endl;
                cout<<"\n¿Quiere continuar haciendo transacciones? (1) si / (2) no: "; cin>>respuesta2; //si queremos continuar haciendo transacciones el bucle se preguntas se repetira y si no, nos saldremos del bucle y el programa finalizara

                if(respuesta2 == 1){

                    cout<<"\n(1) Retirar dinero o (2) ingresar dinero: "; cin>>respuesta1;
                }

                else{

                    cout<<"\nGracias, hasta la proxima"<<endl;
                    return 0;   //el programa finalizara      
                }
            }
            else{

                cout<<" \nNo tiene esa cantidad de dinero"<<endl;

            }
            break;

            case 2: //caso para ingresar dinero y el proceso se repite
                
            cout<<"\nDigite la cantidad de dinero que quiera ingresar al banco: ";cin>>numero;
            saldo += numero;
            cout<<"\nSaldo actual: "<<saldo<<endl;
            cout<<"\n¿Quiere continuar haciendo transacciones? (1) si / (2) no: "; cin>>respuesta2;
            

            if(respuesta2 == 1){

                cout<<"\n(1) Retirar dinero o (2) ingresar dinero: "; cin>>respuesta1;
            }

            else{

                cout<<"\nGracias, hasta la proxima"<<endl;
                return 0;
            }
           break; 
        }

    }
    return 0;
}