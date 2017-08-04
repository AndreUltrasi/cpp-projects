#include <stdio.h>
#include <stdlib.h>
void exercicio1(){
	 int numero;
	 printf("Digite um número: ");
	 scanf("%d",&numero);
 	if(numero%7==0){
         printf("Número divisível por 7");
 	}else if(numero%5==0){
		 printf("Número divisível por 5");
	 }else{
         printf("Número inválido");
		 exit(0);
	    }
	}

void exercicio2(){
    char num[4];
    printf("Digite um número de 4 dígitos: ");
	scanf("%s",&num);
	printf("%c\n%c\n%c\n%c",num[0],num[1],num[2],num[3]);
	exit(0);
}

void exercicio3(){
	float litros,carro;
    printf("Digite a quantidade de litros que o veículo será abastecido: ");
    scanf("%f", &litros);
    printf("Escolha o modelo do veículo\n");
    printf("1 - Gol\n");
    printf("2 - Uno\n");
	printf("3 - Corsa\n");
    printf("4 - Fiesta\n");
    scanf("%f",&carro);
    if(carro==1)
        printf("O veículo faz %f",12*litros);
    else if(carro==2)
         printf("O veículo faz %f",14*litros);
    else if(carro==3)
         printf("O veículo faz %f",11*litros);
    else if(carro==4)
        printf("O veículo faz %f",110*litros);
}

void exercicio4(){
    char c,s,total;
    printf(" Programa Empresa de Terraplanagem\n");
	printf("Capacidades dos Caminhões\n");
	printf("1 - 6 Metros\n");
	printf("2 - 8 Metros\n");
	printf("3 - 12 Metros\n");
	scanf("%c",&c);	    
	printf("Como deseja adquirir o serviço?");
	printf("M - Por metros quadrados");
	printf("V - Por quantidade de viagens");
	scanf("%c",&s);
	
}
    
int main(){ 	     
	int escolha;
	printf("1 - Exercício 01\n");
	printf("2 - Exercício 02\n");
	printf("3 - Exercício 03\n");
	printf("4 - Exercício 04\n");
	scanf("%d",&escolha);
	switch(escolha){
		case 1:
		    exercicio1();break;
		case 2:
		    exercicio2();break;
		case 3:
		    exercicio3();break;
		case 4:
		    exercicio4();break;
	}
    
}		    