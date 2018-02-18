//Lectura hasta el final
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int salir;
int main(){
    int repetir=0;
    string nombre;
    string linea;
    cout<<"Dime la ruta del fichero";
    do{
       getline(cin,nombre);
       ifstream fichero(nombre.c_str());
       if(fichero.fail()==1){
                             cout<<"ERROR. La ruta no existe";
                             ifstream fichero(nombre.c_str());
                             cin>>salir;
                             repetir=1;
                             }else{
                                   repetir=0;
                                   }
    }while(repetir==1);
    while(fichero.eof()==0){
            getline(fichero,linea);
            cout<<linea<<endl;
            }
    fichero.close();
    cin>>salir;
    return 0;
}
