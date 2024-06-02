#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int matricula;
	char nome[50];
	float notaAv;
	float notaSim1;
	float notaSim2;
}aluno;

int main(void){
	
	int n;
	printf("Quantos Alunos tem a turma?\n");
	scanf("%d", &n);
	aluno ficha[n];
	
	for(int i = 1; i <=n; i++){
		printf("Digite a matricula do [%d] aluno:\n", i);
		scanf("%d", &ficha[i].matricula);
		
		printf("Digite o nome do [%d] aluno:\n", i);
		scanf("%s", ficha[i].nome);
		
		printf("Digite a nota da AV do [%d] aluno:\n", i);
		scanf("%f", &ficha[i].notaAv);
		
		printf("Digite a nota da SM1 do [%d] aluno:\n", i);
		scanf("%f", &ficha[i].notaSim1);
		
		printf("Digite a nota da SM2 do [%d] aluno:\n", i);
		scanf("%f", &ficha[i].notaSim2);
	}
	
	for(int i = 1; i <=n; i++){
		printf("\nDados do aluno:\n");
		
		printf("Matricula: %d\n", ficha[i].matricula);
		printf("Nome: %s\n", ficha[i].nome);
		printf("Nota: AV: %2.f\n", ficha[i].notaAv);
		printf("Nota: SM1: %2.f\n", ficha[i].notaSim1);
		printf("Nota: SM2 %2.f\n", ficha[i].notaSim2);
	}
	system("pause");
	return 0;
}