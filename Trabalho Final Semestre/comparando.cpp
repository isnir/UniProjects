#include<stdio.h>

int main(void){
	
	const int size = 10;
	
	int elem[size];
	int ref, igual;
	igual = 0;
	
	for(int i = 0; i < size; i++){
		printf("Insira o %d valor: ", i+1);
		scanf("%d", & elem[i]);
	}
	
	printf("\nInsira um valor para comparacao:\n");
	scanf("%d", &ref);
	
	printf("Numeros maiores que o de referencia:\n");
	for(int i = 0; i < size; i++){
		if(ref == elem[i]){
			igual++;
		}
		if(elem[i] > ref){
			printf("[%d]\t", elem[i]);
		}
	}
	printf("\nO numero de referencia apareceu [%d] vezes", igual);
	return 0;
}