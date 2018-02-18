//Programming file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int salir;
    string otro="no";
    string nombre;
    ofstream agenda("ficheroAgenda.txt");
    string numero;
    while(otro=="no"){
                      cout<<"Nombre: ";
                      cin>>nombre;
                      cout<<"Numero: ";
                      cin>>numero;
                      cout<<"¿Deseas salir?: "<<endl;
                      cin>>otro;
                      }                    
    agenda.close();
    cin>>salir;
    return 0;
    
}
                       
