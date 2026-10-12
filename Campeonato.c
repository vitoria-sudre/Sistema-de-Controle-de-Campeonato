#include<stdio.h>


int main(){
	
	
	int QuantidadeDeEquipes, QuantidadeDeJogos;
	int menu;
	int controle731 = 14;
	
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
    int quantidadeSimulacoes;
    int vitoriasSim, empatesSim, derrotasSim;
    int pontosSim, somaSim, j;
    
	int novasVitorias, novosEmpates, novasDerrotas, novosPontos;
    int novaExcelente, novaBoa, novaRegular, novaRuim;
    int novoMaior, novoMenor;
    int novaEquipeMaior, novaEquipeMenor;
    int novoEmpateMaior, novoEmpateMenor;
    
	float media;
    
    
    printf("....Sistema de Controle de Campeonato....\n");	
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

    novasVitorias = 0;
    novosEmpates = 0;
    novasDerrotas = 0;
    novosPontos = 0;

    novaExcelente = 0;
    novaBoa = 0;
    novaRegular = 0;
    novaRuim = 0;

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
        
        printf("\nEquipe: %d\n", i);
        printf("Vitorias: %d\n", vitorias);
        printf("Empates: %d\n", empates);
        printf("Derrotas: %d\n", derrotas);
        
        
    if (i == 1) {
            novoMaior = pontos;
            novoMenor = pontos;

            novaEquipeMaior = i;
            novaEquipeMenor = i;

            novoEmpateMaior = 1;
             novoEmpateMenor = 1;
    } else {
        if (pontos > novoMaior) {
        novoMaior = pontos;
        novaEquipeMaior = i;
        novoEmpateMaior = 1;
    } else if (pontos == novoMaior) {
        novoEmpateMaior++;
    }

    if (pontos < novoMenor) {
        novoMenor = pontos;
        novaEquipeMenor = i;
        novoEmpateMenor = 1;
    } else if (pontos == novoMenor) {
        novoEmpateMenor++;
    }
}

        printf("Pontos: %d\n", pontos);

        if (pontos >= 15) {
            printf("Excelente campanha\n");
            novaExcelente++;
            
        }
        else if (pontos >= 10) {
            printf("Boa campanha\n");
            novaBoa++;
        }
        else if (pontos >= 5) {
            printf("Campanha regular\n");
            novaRegular++;
        }
        else {
            printf("Campanha ruim\n");
            novaRuim++;
        }

        novasVitorias += vitorias;
        novosEmpates += empates;
        novasDerrotas += derrotas;
        novosPontos += pontos;
    }

    totalVitorias = novasVitorias;
    totalEmpates = novosEmpates;
    totalDerrotas = novasDerrotas;
    totalPontos = novosPontos;

    excelente = novaExcelente;
    boa = novaBoa;
    regular = novaRegular;
    ruim = novaRuim;

    maiorPontos = novoMaior;
    menorPontos = novoMenor;
    equipeMaior = novaEquipeMaior;
    equipeMenor = novaEquipeMenor;
    empateMaior = novoEmpateMaior;
    empateMenor = novoEmpateMenor;

     registroCompleto = 1;
     printf("\nRegistro concluido!\n");

    break;


    case 2:
       

    if (registroCompleto == 0) {
        printf("\nRegistre os resultados primeiro.\n");
    }
    else {
        media = (float)totalPontos / QuantidadeDeEquipes;

        printf("\n--- RESUMO DO CAMPEONATO ---\n");
        printf("Quantidade de equipes: %d\n", QuantidadeDeEquipes);
        printf("Jogos por equipe: %d\n", QuantidadeDeJogos);

        printf("Total de vitorias: %d\n", totalVitorias);
        printf("Total de empates: %d\n", totalEmpates);
        printf("Total de derrotas: %d\n", totalDerrotas);

        printf("Total de pontos: %d\n", totalPontos);
        printf("Media de pontos: %.2f\n", media);

        printf("Campanhas excelentes: %d\n", excelente);
        printf("Boas campanhas: %d\n", boa);
        printf("Campanhas regulares: %d\n", regular);
        printf("Campanhas ruins: %d\n", ruim);
        
        printf("Maior pontuacao: %d\n", maiorPontos);
        printf("Primeira equipe com maior pontuacao: %d\n", equipeMaior);
        printf("Equipes empatadas na maior pontuacao: %d\n", empateMaior);
        
		printf("Menor pontuacao: %d\n", menorPontos);
        printf("Primeira equipe com menor pontuacao: %d\n", equipeMenor);
        printf("Equipes empatadas na menor pontuacao: %d\n", empateMenor);
    }

    break;

    case 3:
        printf("\n--- REGULAMENTO ---\n");
        printf("Vitoria: 3 pontos\n");
        printf("Empate: 1 ponto\n");
        printf("Derrota: 0 pontos\n");
        
		printf("15 ou mais: Excelente campanha\n");
        printf("10 a 14: Boa campanha\n");
        printf("5 a 9: Campanha regular\n");
        
		printf("Menos de 5: Campanha ruim\n");
        printf("Quantidade de equipes: 3 a 10\n");
        printf("Jogos por equipe: 1 a 10\n");
        break;
        
    case 4:
         
		printf("Quantas simulacoes deseja (1 a 5)? ");
        scanf("%d", &quantidadeSimulacoes);

                
	while (quantidadeSimulacoes < 1 || quantidadeSimulacoes > 5) {
        printf("Valor invalido! Digite de 1 a 5: ");
        scanf("%d", &quantidadeSimulacoes);
    }
     for (j = 1; j <= quantidadeSimulacoes; j++) {
        printf("\nSimulacao %d\n", j);

      do {
         printf("Digite as vitorias: ");
         scanf("%d", &vitoriasSim);

         printf("Digite os empates: ");
         scanf("%d", &empatesSim);

         printf("Digite as derrotas: ");
         scanf("%d", &derrotasSim);

     somaSim = vitoriasSim + empatesSim + derrotasSim;

    if (vitoriasSim < 0 || empatesSim < 0 || derrotasSim < 0 || somaSim != QuantidadeDeJogos) {
         printf("Resultados invalidos! Tente novamente.\n");
      }  
	
	} while (vitoriasSim < 0 || empatesSim < 0 || derrotasSim < 0 || somaSim != QuantidadeDeJogos);
          pontosSim = vitoriasSim * 3 + empatesSim;
		  printf("Pontos: %d\n", pontosSim);

    if (pontosSim >= 15) {
        printf("Excelente campanha\n");
    } 
	else if (pontosSim >= 10) {
        printf("Boa campanha\n");
     }
    else if (pontosSim >= 5) {
        printf("Campanha regular\n");
    }
    else {
    printf("Campanha ruim\n");
      }
    
    } 
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
