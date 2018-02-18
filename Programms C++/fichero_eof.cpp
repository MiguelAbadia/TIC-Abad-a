//Lectura hasta el final
#include<iostream>
#include<fstream>
using namespace std;
int salir;
int main(){
    string linea;
    ifstream fichero("miFichero.txt");
    if(fichero.fail()==1){
                          cout<<"ERROR. La ruta no existe";
                          cin>>salir;
                          exit(1);
                          }
    while(fichero.eof()==0){
            getline(fichero,linea);
            cout<<linea<<endl;
            }
    fichero.close();
    cin>>salir;
    return 0;
}
