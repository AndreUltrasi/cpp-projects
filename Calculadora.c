#include <stdio.h>
#include <stdlib.h>
int main(){
	int opcao;
	float x,y;
    printf("Calculadora Simples\n");
    printf("1.Soma\n");
	printf ("2.Subtração\n");
	printf("3.Multiplicação\n");
	printf ("4.Divisão\n");
    scanf("%d", & opcao);
    if (!(1<=opcao && opcao<=4)){
        printf("Código Inválido");
        exit(0);
    }
	printf("\nEntre com dois números e escolha a ");
	printf("operação que realizará entre eles\n");
	printf("\nEntre com o 1° número: \n");
	scanf("%f",&x);
	printf("Entre com o 2° número: \n");
	scanf("%f", &y);
	if (y==0 && opcao==4){
	    printf("Não é possível divisão por zero!");
	    exit(0);
	}
    if (opcao==1)
    	printf("A soma de %.2f e %.2f é igual a %.2f",x,y,x+y);
    else if(opcao==2)
        printf("A subtração de %.2f e %.2f é igual a %.2f", x,y,x-y);
    else if(opcao==3)
        printf("A multiplicação de %.2f e %.2f é igual a %.2f", x,y,x*y);
    else if(opcao==4)
        printf("A divisão de %.2f e %.2f é igual a %.2f", x,y,x/y);   
        return 0;
}