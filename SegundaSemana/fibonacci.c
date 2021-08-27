#include<stdio.h>
#include<stdlib.h>


int i[10] = {2, 3, 4, 5, 6, 7, 8, 9};
char j[][4] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
int input[7];
char *pointer;
int count = 0;

int main(){
    
    printf("Ingresa un número!");
    scanf("%d", input);
    for(int k = 0; k <= count; k++){
        if(input[k] == 1 || input[k] == 0){
            printf("");
        } else {
            for(int l = 0; l <= 8; l++){
                if (input[k] == i[l]){
                    printf("%s, ", j[k]);
                }
            }
        }
    count++;
    }
}