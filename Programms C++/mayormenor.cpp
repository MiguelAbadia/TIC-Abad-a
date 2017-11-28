#include<iostream>

int main(){
    /*Este programa sirve para leer tres numeros enteros y devolver el mayor*/
    int salir;
    int n1,n2,n3;
    std::cout<<"Escribe el primer numero: ";
    std::cin>>n1;
    std::cout<<"Escribe el segundo numero: ";
    std::cin>>n2;
    std::cout<<"Escribe el tercer numero: ";
    std::cin>>n3;
    if (n1>n2){
       if(n1>n3){
                 std::cout<<n1,"es el mayor numero";            
       }else{
             std::cout<<n3,"es el mayor numero";
       }
    }
    else{
         std::cout<<n2,"es el mayor numero";
    }
    std::cout<<"Toca cualquier tecla";
    std::cin>>salir;
    return 0;
}   
