//Programas de manejo de memoria
#include<stdio.h>
int main(){
    char palabra1[5];
    char palabra2[5];
    printf("Dime algo: ");
    scanf("%s",palabra1);
    printf(" \nDime algo mas: ");
    scanf("%s",palabra2); 
    int salir;
    printf("Direccion palabra1 = %x ",&palabra1);
    printf("\nPalabra1 = %c\n ",*(&palabra1+1);
    printf("Direccion palabra2 = %x",&palabra2);
    printf("\nPalabra2 = %c ",*(&palabra2+1);
    scanf("%i",&salir);
    
}
