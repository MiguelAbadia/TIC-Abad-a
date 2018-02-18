//Leer lineas
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    int exit;
    ifstream file("Agenda.txt");
    string message;
    getline(file,message);
    cout<<"La primera linea dice:"<<endl;
    cout<<message;
    cin>>exit;
}
