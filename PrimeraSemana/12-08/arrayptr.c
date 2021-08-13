#include <stdio.h>

int main(){
	int numbers[5];
	int *ptr = numbers;
	int v = 2;

	for(; ptr<&numbers[5]; ptr++){
		*ptr = v;
		v = v * 2;
	}

	int i;
	for(i=0;i<5;i++){
		printf("%d\n", numbers[i]);
	}
	
}
