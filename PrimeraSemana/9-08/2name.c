#include<stdio.h>
#include<string.h>

int main(){
    char name[20] = "";
    char exc[4] = "Juan";
    char exc2[3] = "Ana";
    
    printf("Enter your name!");
    scanf("%s", name); 

    int value = strcmp(name, exc); 
    int value2 = strcmp(name, exc2);

    if (value == 0 || value2 == 0) {
        printf("Hello %s", name);
    }
    else{
        printf("Hello");
    }
    return 0;
}