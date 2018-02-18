//malloc reserva memoria

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int posicion;
    int salir;
    char *ganadores[3];
    for(posicion=0;posicion<3;posicion++){
                                          ganadores[posicion]=(char*) malloc(10*sizeof(char));//para guardar 10 letras
                                          }
                                          
                                          
    strcpy(ganadores[0],"Amaia");//string copy copia la cadena "Amaia" en la dirección almacenada en ganadores[0]
   
   printf("nombre = %s guardado en %x", ganadores[0], ganadores[0]);
    //strcpy(ganadores[1], "Aitana");
    //strcpy(ganadores[2],"Miram");
    scanf("%i",&salir);
}
