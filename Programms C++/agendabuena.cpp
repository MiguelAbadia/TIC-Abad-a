#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    int salir;
    struct elementoagenda{
           string nombre;
           char otro;
           int numero;
           string direccion;
     };
     int n=0;
     char respuesta;
     string nombre;
     int cont;
     char otro;
     
     int numero;
     string direccion;
     elementoagenda amigo[5];
     ifstream fichero("ficheroAgenda.txt");
     while(respuesta=='s')
      cout<<"Nombre: ";
      cin>>amigo[n].nombre;  
      cout<<"Numero: ";
      cin>>amigo[n].numero;            
      cout<<"Deseas introducir otro amigo (s/n)?: ";
      cin>>otro;
      n++;
      for(cont=0;cont<5;cont++){
     cout<<"DATOS contacto "<<cont;                        
     cout<<"¿Como te llamas?: ";
     cin>>amigo[cont].nombre;
     cout<<"¿Cual es tu numero de telefono?: ";
     cin>>amigo[cont].numero;
     cout<<"¿cual es tu direccion de correo electronico?: ";
     cin>>amigo[cont].direccion;                          
                                     
    }
                   cin>>salir;
                   return 0;
           }
           
