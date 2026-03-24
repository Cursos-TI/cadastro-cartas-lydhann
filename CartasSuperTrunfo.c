
#include <stdio.h>

int main() {
	// Declaração das variáveis para a Carta 1
	char estado1;
	char codigo1[5]; // 3 caracteres + '\0'
	char nomeCidade1[51]; // até 50 caracteres + '\0'
	int populacao1;
	float area1;
	float pib1;
	int pontosTuristicos1;
	float densidadePopulacional1;
	float pibPerCapita1;

	// Declaração das variáveis para a Carta 2
	char estado2;
	char codigo2[5];
	char nomeCidade2[51];
	int populacao2;
	float area2;
	float pib2;
	int pontosTuristicos2;
	float densidadePopulacional2;
	float pibPerCapita2;

	// Instruções para o usuário
	printf("Cadastro da Carta 1:\n");
	printf("Digite a letra do Estado (A-H): ");
	scanf(" %c", &estado1);
	printf("Digite o código da carta (ex: A01): ");
	scanf(" %4s", codigo1);
	printf("Digite o nome da cidade: ");
	scanf(" %50s", nomeCidade1);
	printf("Digite a população: ");
	scanf("%d", &populacao1);
	printf("Digite a área (em km²): ");
	scanf("%f", &area1);
	printf("Digite o PIB (em bilhões de reais): ");
	scanf("%f", &pib1);
	printf("Digite o número de pontos turísticos: ");
	scanf("%d", &pontosTuristicos1);

	printf("\nCadastro da Carta 2:\n");
	printf("Digite a letra do Estado (A-H): ");
	scanf(" %c", &estado2);
	printf("Digite o código da carta (ex: B02): ");
	scanf(" %4s", codigo2);
	printf("Digite o nome da cidade: ");
	scanf(" %50s", nomeCidade2);
	printf("Digite a população: ");
	scanf("%d", &populacao2);
	printf("Digite a área (em km²): ");
	scanf("%f", &area2);
	printf("Digite o PIB (em bilhões de reais): ");
	scanf("%f", &pib2);
	printf("Digite o número de pontos turísticos: ");
	scanf("%d", &pontosTuristicos2);

	// Cálculo da densidade populacional e PIB per capita para cada carta
	densidadePopulacional1 = populacao1 / area1;
	pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB está em bilhões de reais

	densidadePopulacional2 = populacao2 / area2;
	pibPerCapita2 = (pib2 * 1000000000) / populacao2;

	// Exibição dos dados cadastrados e dos cálculos
	printf("\nCarta 1:\n");
	printf("Estado: %c\n", estado1);
	printf("Código: %s\n", codigo1);
	printf("Nome da Cidade: %s\n", nomeCidade1);
	printf("População: %d\n", populacao1);
	printf("Área: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
	printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
	printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

	printf("\nCarta 2:\n");
	printf("Estado: %c\n", estado2);
	printf("Código: %s\n", codigo2);
	printf("Nome da Cidade: %s\n", nomeCidade2);
	printf("População: %d\n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
	printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

	return 0;
}
