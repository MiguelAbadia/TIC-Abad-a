#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string message;
    int exit;
    //Opening the file
    ofstream file("Agenda.txt");
    for(int cont=1;cont<10;cont++){
                               cout<<"Nombre",cont,"º"<<endl;
                               }
    file.close();
    cout<<"Ya esta. Fichero cerrado"; 
    cin>>exit;
    return 0;
}
