#include<stdio.h>

int main(void){
	
	int n;
	printf("Quantos elementos serao testados:\n");
	scanf("%d", &n);
	
	int elem[n];
	int par, impar;
	par = impar = 0; 
	
	for(int i = 0; i < n; i++){
		printf("Insira o %d elemento: ", i+1);
		scanf("%d", &elem[i]);
		
		if(elem[i] % 2 == 0){
			par++;
		}
		else
			impar++;
	}
	printf("\n[%d] elemetos pares\n[%d] elemetos impares", par, impar);
	return 0;
}