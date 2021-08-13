#include <stdio.h>

int main(){
	printf("Numeros primos del 1 al 100:\n");
    for(int i= 1; i <= 100; i++){
        int count = 0;
        for(int j = 1; j <= i; j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count == 2){
            printf("%d, ", i);
        }
    }

}