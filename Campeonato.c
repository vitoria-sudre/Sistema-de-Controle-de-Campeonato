#include<stdio.h>


int main(){
	
	
	int QuantidadeDeEquipes, QuantidadeDeJogos;
	int menu;
    
    	
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
	
	
		
	} do{
	
	
	printf("\n1 - Registrar resultados do campeonato");
    printf("\n2 - Mostrar resumo do campeonato");
    printf("\n3 - Mostrar regulamento");
    printf("\n4 - Simular campanha de uma equipe");
    printf("\n5 - Encerrar sistema");

    printf("\nEscolha uma opcao: ");
    scanf("%d", &menu);
	
		
		
   switch (menu) {
   
    case 1:
        printf(" Registrar resultados do campeonato");
        break;

    case 2:
        printf("Mostrar resumo do campeonato");
        break;

    case 3:
        printf("Mostrar regulamento");
        break;
        
    case 4:
        printf("Simular campanha de uma equipe");
        break;
		
	case 5:
        printf("Encerrar sistema");
        break;	    

    default:
        printf("\nOpcao invalida!");
        break;
    }

} while (menu != 5);

return 0;
}
