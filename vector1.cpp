//Vamos a aprender a hacer arrays
using namespace std;
#include<iostream>
int main(){
    int vector[5];
    int cont;
    int salir;
    int suma=0;
    for(cont=0;cont<5;cont++){
                              cout<<"Dime un numero: ";
                              cin>>vector[cont];
                              }
    cout<<"Mira mi vector relleno: "<<endl;
    for(cont=0;cont<5;cont++){
                              cout<<"vector["<<cout<<"]="<<vector[cont]<<endl;
                              }
    //Ahora sumamos
    cout<<"La SUMA VALE: ";
    for(cont=0;cont<5;cont++){
                              suma=suma+vector[cont];
                              }
    cout<<suma<<endl;
    cout<<"Toca cualquier tecla:";
    cin>>salir;
    return 0;
 }
    
    
    
    
   
