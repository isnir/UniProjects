#include<stdio.h>
#include<stdlib.h>

int tabuada(int num){
	int res;
	for(int i=1; i<=10; i++){
		res = num * i;
		printf("\n%d x %d = %d", num, i, res);
	}
}

int main(void){
	
	int num, res;
	
	do{
		printf("Digite o numero que sera feita a tabuada\n");
		scanf("%d", &num);
	}while(num<=1 || num >=10);
	
	tabuada(num);
	return(0);
}