#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void menuPrincipal() {
	printf("1 - Apurar votos\n");
	printf("2 - Computar votos\n");
	printf("3 - Sair\n");
}
void menuCandidatos() {
	printf("1 - Candidato 1\n");
	printf("2 - Candidato 2\n");
	printf("3 - Candidato 3\n");
	printf("4 - Candidato 4\n");
	printf("5 - Candidato 5\n");
	printf("6 - Concluir Operação\n");
}
int main() {
	setlocale(LC_ALL, "");
	int opcao, candidato, colegioA1 = 0, colegioA2 = 0, colegioA3 = 0, colegioA4 = 0, colegioA5 = 0, colegioB1 = 0, colegioB2 = 0, colegioB3 = 0, colegioB4 = 0, colegioB5 = 0, colegioC1 = 0, colegioC2 = 0, colegioC3 = 0, colegioC4 = 0, colegioC5 = 0;
	do {
		menuPrincipal();
		scanf("%d", &opcao);
		system("cls");
		if (opcao==1){
			do {
				system("cls");
				menuCandidatos();
				scanf("%d", &candidato);
				system("cls");
				switch (candidato) {
				case 1:
					printf("Candidato %d\n", candidato);
					for (int i=0,x=0;x!=4;i++) {
						printf("1 - Votos Totais Colégio A: %d\n", colegioA1);
						printf("2 - Votos Totais Colégio B: %d\n", colegioB1);
						printf("3 - Votos Totais Colégio C: %d\n", colegioC1);
						printf("4 - Sair\n");
						scanf("%d", &x);
						switch (x) {
						case 1:
							printf("Candidato %d\nVotos Totais Colégio A: ", candidato);
							scanf("%d", &colegioA1);
							system("cls");
							break;
						case 2:
							printf("Candidato %d\nVotos Totais Colégio B: ", candidato);
							scanf("%d", &colegioB1);
							system("cls");
							break;
						case 3:
							printf("Candidato %d\nVotos Totais Colégio C: ", candidato);
							scanf("%d", &colegioC1);
							system("cls");
							break;
						case 4:
							break;
						}

					}
					break;
				case 2:
					printf("Candidato %d\n", candidato);
					for (int i = 0, x=0;x != 4;i++) {
						printf("1 - Votos Totais Colégio A: %d\n", colegioA2);
						printf("2 - Votos Totais Colégio B: %d\n", colegioB2);
						printf("3 - Votos Totais Colégio C: %d\n", colegioC2);
						printf("4 - Sair\n");
						scanf("%d", &x);
						switch (x) {
						case 1:
							printf("Candidato %d\nVotos Totais Colégio A: ", candidato);
							scanf("%d", &colegioA2);
							system("cls");
							break;
						case 2:
							printf("Candidato %d\nVotos Totais Colégio B: ", candidato);
							scanf("%d", &colegioB2);
							system("cls");
							break;
						case 3:
							printf("Candidato %d\nVotos Totais Colégio C: ", candidato);
							scanf("%d", &colegioC2);
							system("cls");
							break;
						case 4:
							break;
						}
					}
					break;
				case 3:
					printf("Candidato %d\n", candidato);
					for (int i = 0, x=0;x != 4;i++) {
						printf("1 - Votos Totais Colégio A: %d\n", colegioA3);
						printf("2 - Votos Totais Colégio B: %d\n", colegioB3);
						printf("3 - Votos Totais Colégio C: %d\n", colegioC3);
						printf("4 - Sair\n");
						scanf("%d", &x);
						switch (x) {
						case 1:
							printf("Candidato %d\nVotos Totais Colégio A: ", candidato);
							scanf("%d", &colegioA3);
							system("cls");
							break;
						case 2:
							printf("Candidato %d\nVotos Totais Colégio B: ", candidato);
							scanf("%d", &colegioB3);
							system("cls");
							break;
						case 3:
							printf("Candidato %d\nVotos Totais Colégio C: ", candidato);
							scanf("%d", &colegioC3);
							system("cls");
							break;
						case 4:
							break;
						}
					}
					break;
				case 4:
					printf("Candidato %d\n", candidato);
					for (int i = 0, x=0;x != 4;i++) {
						printf("1 - Votos Totais Colégio A: %d\n", colegioA4);
						printf("2 - Votos Totais Colégio B: %d\n", colegioB4);
						printf("3 - Votos Totais Colégio C: %d\n", colegioC4);
						printf("4 - Sair\n");
						scanf("%d", &x);
						switch (x) {
						case 1:
							printf("Candidato %d\nVotos Totais Colégio A: ", candidato);
							scanf("%d", &colegioA4);
							system("cls");
							break;
						case 2:
							printf("Candidato %d\nVotos Totais Colégio B: ", candidato);
							scanf("%d", &colegioB4);
							system("cls");
							break;
						case 3:
							printf("Candidato %d\nVotos Totais Colégio C: ", candidato);
							scanf("%d", &colegioC4);
							system("cls");
							break;
						case 4:
							break;
						}
					}
					break;
				case 5:
					printf("Candidato %d\n", candidato);
					for (int i = 0, x=0;x != 4;i++) {
						printf("1 - Votos Totais Colégio A: %d\n", colegioA5);
						printf("2 - Votos Totais Colégio B: %d\n", colegioB5);
						printf("3 - Votos Totais Colégio C: %d\n", colegioC5);
						printf("4 - Sair\n");
						scanf("%d", &x);
						switch (x) {
						case 1:
							printf("Candidato %d\nVotos Totais Colégio A: ", candidato);
							scanf("%d", &colegioA5);
							system("cls");
							break;
						case 2:
							printf("Candidato %d\nVotos Totais Colégio B: ", candidato);
							scanf("%d", &colegioB5);
							system("cls");
							break;
						case 3:
							printf("Candidato %d\nVotos Totais Colégio C: ", candidato);
							scanf("%d", &colegioC5);
							system("cls");
							break;
						case 4:
							break;
						}
					}
					break;

				}
			} while (candidato != 6);
		}
		else if(opcao==2){
			int total1 = colegioA1 + colegioB1 + colegioC1;
			int total2 = colegioA2 + colegioB2 + colegioC2;
			int total3 = colegioA3 + colegioB3 + colegioC3;
			int total4 = colegioA4 + colegioB4 + colegioC4;
			int total5 = colegioA5 + colegioB5 + colegioC5;
			int total[5] = {total1, total2,total3, total4, total5 };
			int totalPrimeiro = 0, totalSegundo = 0;
			int primeiro = 0, segundo = 0;
			printf("\t\tColégio A\tColégio B\tColégio C\tTotal\n");
			printf("Candidato 1\t%d\t\t %d\t\t %d\t\t%d\n", colegioA1, colegioB1, colegioC1, total1);
			printf("Candidato 2\t%d\t\t %d\t\t %d\t\t%d\n", colegioA2, colegioB2, colegioC2, total2);
			printf("Candidato 3\t%d\t\t %d\t\t %d\t\t%d\n", colegioA3, colegioB3, colegioC3, total3);
			printf("Candidato 4\t%d\t\t %d\t\t %d\t\t%d\n", colegioA4, colegioB4, colegioC4, total4);
			printf("Candidato 5\t%d\t\t %d\t\t %d\t\t%d\n", colegioA5, colegioB5, colegioC5, total5);
			for (int i = 0;i < 5;i++) {
				if (total[i] > totalPrimeiro) {
					segundo = primeiro;
					totalSegundo = totalPrimeiro;
					totalPrimeiro = total[i];
					primeiro = i + 1;
				}
				else if (total[i] > totalSegundo) {
					segundo = i+1;
					totalSegundo = total[i];
				}
			}
			int totalvalor = total1 + total2 + total3 + total4 + total5 + 1;
			int compara = (totalvalor - total[primeiro-1]);
			if (totalPrimeiro > compara ) {
				printf("O candidado %d é o campeão !\n",primeiro);
				system("pause");
				exit(0);
			}else{
				int c1,c2;
				printf("Os candidados %d e %d foram para o 2º turno\n", primeiro, segundo);
				printf("Insira o total de votos do 2º turno do candidato %d: ", primeiro);
				scanf("%d", &c1);
				printf("Insira o total de votos do 2º turno do candidato %d: ",segundo);
				scanf("%d", &c2);
				if (c2 > c1) {
					printf("O candidato %d é o campeão !\n", segundo);
				}
				else {
					printf("O candidato %d é o campeão !\n", primeiro);
				}
				system("pause");
				exit(0);
			}
		}
		else if (opcao==3){
	    exit(0);
	    }	
	} while (1==1);
}