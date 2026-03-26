
#include <stdio.h>

int main() {
	// Declaração das variáveis para a Carta 1
	char estado1;
	char codigo1[5]; // 3 caracteres + '\0'
	char nomeCidade1[51]; // até 50 caracteres + '\0'
	unsigned long int populacao1;
	float area1;
	float pib1;
	int pontosTuristicos1;
	float densidadePopulacional1;
	float pibPerCapita1;
	float superPoder1;

	// Declaração das variáveis para a Carta 2
	char estado2;
	char codigo2[5];
	char nomeCidade2[51];
	unsigned long int populacao2;
	float area2;
	float pib2;
	int pontosTuristicos2;
	float densidadePopulacional2;
	float pibPerCapita2;
	float superPoder2;

	// Instruções para o usuário
	printf("Cadastro da Carta 1:\n");
	printf("Digite a letra do Estado (A-H): ");
	scanf(" %c", &estado1);
	printf("Digite o código da carta (ex: A01): ");
	scanf(" %4s", codigo1);
	printf("Digite o nome da cidade: ");
	scanf(" %50s", nomeCidade1);
	printf("Digite a população: ");
	scanf("%lu", &populacao1);
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
	scanf("%lu", &populacao2);
	printf("Digite a área (em km²): ");
	scanf("%f", &area2);
	printf("Digite o PIB (em bilhões de reais): ");
	scanf("%f", &pib2);
	printf("Digite o número de pontos turísticos: ");
	scanf("%d", &pontosTuristicos2);

	// Cálculo da densidade populacional e PIB per capita para cada carta
	densidadePopulacional1 = (area1 != 0.0f) ? ((float)populacao1 / area1) : 0.0f;
	pibPerCapita1 = (populacao1 != 0UL) ? ((pib1 * 1000000000.0f) / (float)populacao1) : 0.0f; // PIB está em bilhões

	densidadePopulacional2 = (area2 != 0.0f) ? ((float)populacao2 / area2) : 0.0f;
	pibPerCapita2 = (populacao2 != 0UL) ? ((pib2 * 1000000000.0f) / (float)populacao2) : 0.0f;

	// Super Poder: soma de atributos numéricos + inverso da densidade (quanto menor densidade, maior poder)
	// Obs.: conversions para float para evitar overflow/inteiros na soma.
	superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + ((densidadePopulacional1 != 0.0f) ? (1.0f / densidadePopulacional1) : 0.0f);
	superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + ((densidadePopulacional2 != 0.0f) ? (1.0f / densidadePopulacional2) : 0.0f);

	// Exibição dos dados cadastrados e dos cálculos
	printf("\nCarta 1:\n");
	printf("Estado: %c\n", estado1);
	printf("Código: %s\n", codigo1);
	printf("Nome da Cidade: %s\n", nomeCidade1);
	printf("População: %lu\n", populacao1);
	printf("Área: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
	printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
	printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
	printf("Super Poder: %.2f\n", superPoder1);

	printf("\nCarta 2:\n");
	printf("Estado: %c\n", estado2);
	printf("Código: %s\n", codigo2);
	printf("Nome da Cidade: %s\n", nomeCidade2);
	printf("População: %lu\n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
	printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
	printf("Super Poder: %.2f\n", superPoder2);

	// Comparações atributo por atributo (1 = Carta 1 vence, 0 = Carta 2 vence)
	printf("\nComparação de Cartas:\n\n");
	printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
	printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
	printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
	printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);
	// Para densidade, menor vence
	printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0);
	printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
	printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? 1 : 0);

	return 0;
}
