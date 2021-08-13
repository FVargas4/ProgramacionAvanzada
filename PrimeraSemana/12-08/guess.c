#include <stdio.h>
#include <stdlib.h>

int main(){
    int random = rand() % 10;
    int response;
    while(response != random){
        printf("Intenta adivinar");
        scanf("%d", &response);
        if(response > random){
            printf("Intenta un numero más pequeño\n");
        } else if(response < random){
            printf("Intenta un numero más grande\n");
        }
    }
    printf("Numero adivinado\n");
    random = 0;

    

}