//Leer lineas
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream file("miFichero.txt");
    int exit;
    string message;
    cout<<"El texto dice:";
    for(int nline=1;nline<=4;nline++){
           
            getline(file,message);
            cout<<message;
            cout<<endl;
            }
    cin>>exit;
}
