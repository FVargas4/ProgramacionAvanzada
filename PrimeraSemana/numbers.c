#include<stdio.h>
#include<string.h>

int main(){
    int i = 0;
    int num;
    int result;

    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 0; i <= num; ++i){
        result +=  i;
    } 

    printf("The sum of numbers is %d", result);

    return 0;
}