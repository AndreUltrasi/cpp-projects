/* Desenvolva um programa
onde o usuário informa as 
dimensões de uma parede e as 
dimensões do azulejo. Calcular
quantos azulejos serão necessários 
para preencher a parede*/

#include <stdio.h>
int main(){
	float ladoP,  alturaP, ladoA, alturaA,resultado;
	printf("Digite a largura da parede em metros: ");
    scanf("%f", &ladoP);
    printf("Digite a altura da parede em metros: ");
    scanf("%f", &alturaP);
    printf("Digite a largura do azulejo em centímetros: ");
    scanf("%f", &ladoA);
    printf("Digite a altura do azulejo em centímetros: ");
    scanf("%f", &alturaA); resultado=(ladoP*alturaP)/((ladoA*alturaA)/10000);
    printf("Serão necessários %f azulejos", resultado);
}