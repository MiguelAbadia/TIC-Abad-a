//Manejo de punteros
#include<stdio.h>
#include<stdlib.h>
int main(){
    int salir;
    char *lista[3];
    lista[0]=(char*) malloc(8*sizeof(char));
    lista[1]=(char*) malloc(7*sizeof(char));
    lista[2]=(char*) malloc(9*sizeof(char));
    printf("\nPrimer rey mago: ");
    scanf("%s",lista[0]);
    printf("\nSegundo rey mago: ");
    scanf("%s",lista[1]);
    printf("\nTercer rey mago: ");
    scanf("%s",lista[2]);
    printf("\nLos tres reyes magos son:");
    printf("%s,",lista[0]);
    printf("%s,",lista[1]);
    printf("y %s.",lista[2]);
    
    
    printf("\nToca cualquier tecla para salir");
    scanf("%c",&salir);
}
    
