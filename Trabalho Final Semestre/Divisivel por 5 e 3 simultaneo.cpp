#include<stdio.h>

int main(void){
	
	const int size = 10;
	int elem[size];
	int res = 0;
	
	for(int i = 0; i < size; i++){
		printf("Insira o %d elemento: ", i+1);
		scanf("%d", &elem[i]);
		
		if(elem[i] % 5 == 0 && elem[i] % 3 == 0){
			res++;
		}	
	}
	
	printf("\n[%d] dos [%d] numeros sao divisiveis por 5 e 3 simultaneamente\n", res, size);
	
	printf("Sendo eles:\n");
	for(int i = 0; i < size; i++){
		if(elem[i] % 5 == 0 && elem[i] % 3 == 0){
		printf("[%d]\n", elem[i]);
		}
	}
		
	return 0;
}