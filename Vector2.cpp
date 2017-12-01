#include<iostream>
using namespace std;

int main(){
    int vector1[5];
    int vector2[5];
    int vector3[5];
    int suma; 
    int salir;
//Rellenamos los vectores
    cout<<"Dictame el primer vector";
    for (int cont=0;cont<5;cont++){
                                   cout<<"Vector["<<cont<<"]=";
                                   cout<<"Dime un numero"<<endl;
                                   cin>>vector1[cont];
                                   }
    cout<<"Dictame el segundo vector";
    for (int cont=0;cont<5;cont++){
             cout<<"Vector["<<cont<<"]=";
             cout<<"Dime un numero"<<endl;
             cin>>vector2[cont];
                                   }
    cout<<"Dictame el tercer vector";
    for (int cont=0;cont<5;cont++){
                                   cout<<"Vector["<<cont<<"]=";
                                   cout<<"Dime un numero"<<endl;
                                   cin>>vector3[cont];
                                   }
    for(int cont=0;cont<5;cont++){
                                  suma=vector1[5]+vector2[5]+vector3[5];       
                                  }                    
    cout<<"La suma vale"<<suma;
    cout<<"Presiona cualquier tecla para salir";
    cin>>salir;
    return 0;
}       
