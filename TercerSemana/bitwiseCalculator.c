#include<stdio.h>
#include<math.h>

int main(){
    int swt;
    int exit =0;
    printf("Binevenido, que deseas hacer?\n Ingresa un 1 para sumar dos números o ingresa 2 para restarlos: ");
    scanf("%d", &swt);

    while(exit != 0){
        if(swt == 1){
            //Aqui va la suma
             printf("hola");
        }else if(swt == 2){
            //Aqui va la resta
            printf("adios");
        }else{
           //Otro caso
            printf("Ingresa una opcion valida");
        }    
    }
}