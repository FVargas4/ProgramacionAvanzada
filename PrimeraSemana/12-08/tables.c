#include <stdio.h>

int main(){
	
    int numeros = 10;
    int i, j, k;
    
    for(i = 1; i <= numeros; i++){
        for(j = 1; j <= numeros; j++){
            k = i * j;
            printf("%d x %d = %d\n", i, j, k);
        }
    }

}