#include<stdio.h>
#include<string.h>

int main(){
    char name[20] = "";
    printf("Enter your name!");
    scanf("%s", name); 
    printf("Hello %s", name);
    return 0;
}