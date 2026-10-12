#include<stdio.h>


int main(){
	
	
	int QuantidadeDeEquipes, QuantidadeDeJogos;
	int menu;
	
	int vitorias, empates, derrotas;
    int pontos, i, soma;
    int totalVitorias = 0;
    int totalEmpates = 0;
    int totalDerrotas = 0;
    int totalPontos = 0;
    int registroCompleto = 0;
    
    int excelente = 0, boa = 0, regular = 0, ruim = 0;
    int maiorPontos = 0, menorPontos = 0;
    int equipeMaior = 0, equipeMenor = 0;
    int empateMaior = 0, empateMenor = 0;
    float media;
    
    	
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

    totalVitorias = 0;
    totalEmpates = 0;
    totalDerrotas = 0;
    totalPontos = 0;
    
    excelente = 0;
    boa = 0;
    regular = 0;
    ruim = 0;

    for (i = 1; i <= QuantidadeDeEquipes; i++) {

        printf("\nEquipe %d\n", i);

        do {
            printf("Digite as vitorias: ");
            scanf("%d", &vitorias);

            printf("Digite os empates: ");
            scanf("%d", &empates);

            printf("Digite as derrotas: ");
            scanf("%d", &derrotas);

            soma = vitorias + empates + derrotas;

            if (vitorias < 0 || empates < 0 || derrotas < 0 || soma != QuantidadeDeJogos) {

                printf("Resultados invalidos! Tente novamente.\n");
            }

        } while (vitorias < 0 || empates < 0 || derrotas < 0 || soma != QuantidadeDeJogos);

        pontos = vitorias * 3 + empates;

        printf("Pontos: %d\n", pontos);

        if (pontos >= 15) {
            printf("Excelente campanha\n");
        }
        else if (pontos >= 10) {
            printf("Boa campanha\n");
        }
        else if (pontos >= 5) {
            printf("Campanha regular\n");
        }
        else {
            printf("Campanha ruim\n");
        }

        totalVitorias += vitorias;
        totalEmpates += empates;
        totalDerrotas += derrotas;
        totalPontos += pontos;
    }

    registroCompleto = 1;
    printf("\nRegistro concluido!\n");

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
       printf("\nSistema encerrado com sucesso.");
       printf("\nObrigado por utilizar o sistema.");
       break;  

    default:
        printf("\nOpcao invalida!");
        break;
    }

} while (menu != 5);

return 0;
}
