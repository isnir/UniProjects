#include<stdio.h>

int main(void){
	
	int n;
	
	printf("Quantas pessoas serao entrevistadas:\n");
	scanf("%d", &n);
	
	int elem[n];
	int jovemQnt, adultoQnt, idosoQnt, invalidoQnt;
	jovemQnt = adultoQnt = idosoQnt = invalidoQnt = 0;
	
	for(int i = 0; i < n; i++){
		printf("Insira a idade do [%d] entrevistado:\n", i+1);
		scanf("%d", &elem[i]);
		
		if(elem[i] >= 18 && elem[i] < 35){
			jovemQnt++;
		}
		else if(elem[i] >= 35 && elem[i] < 65){
			adultoQnt++;
		}
		else if(elem[i] >= 65 && elem[i] <= 80){
			idosoQnt++;
		}
		else{
			invalidoQnt++;
		}
	}
	
	printf("\n[%d] Entrevistado(s) pertencia(m) a faixa etaria [JOVEM]", jovemQnt);
	printf("\n[%d] Entrevistado(s) pertencia(m) a faixa etaria [ADULTO]", adultoQnt);
	printf("\n[%d] Entrevistado(s) pertencia(m) a faixa etaria [IDOSO]", idosoQnt);
	printf("\n[%d] Entrevistado(s) e/sao [INVALIDOS] para entrada nesta pesquisa", invalidoQnt);
	return 0;
}