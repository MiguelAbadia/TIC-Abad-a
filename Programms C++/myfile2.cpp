//Leer lineas
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    int exit;
    ifstream file("miFichero.txt");
    string message;
    getline(file,message);
    cout<<"La primera linea dice:";
    cout<<message;
    cin>>exit;
}
