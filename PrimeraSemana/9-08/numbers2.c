#include<stdio.h>
#include<string.h>

int main(){
    int i, num;
    int result = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; ++i){
        result = result * i;
    } 

    printf("The factorial number for your number is %d", result);

    return 0;
}