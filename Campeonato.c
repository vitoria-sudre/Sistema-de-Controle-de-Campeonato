#include<stdio.h>


int main(){
	
	
	int QuantidadeDeEquipes, QuantidadeDeJogos;
    
    	
	printf("Digite o numero de equipes (3 a 10): ");
	scanf("%d", &QuantidadeDeEquipes);

	
	while(QuantidadeDeEquipes < 3 || QuantidadeDeEquipes > 10){
	
	
		
	printf("Numero invalido! Digite novamente: ");
	scanf("%d", &QuantidadeDeEquipes);

		
	}
	
	
	printf("Digite a quantiade de jogos por equipe (1 a 10): ");
	scanf("%d", &QuantidadeDeJogos);
	
	while(QuantidadeDeJogos < 1 || QuantidadeDeJogos > 10){
		
		
	printf("Numero invalido! Digite novamente: ");
	scanf("%d", &QuantidadeDeJogos);
	
		
	}
	
		
  
  	
  	
  }
	
