#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<string.h>

int tab[20][20], jog=0, player=1, vitoria=0;
/*Tabuliro vazio tudo = -1*/

void iniciatab(){
	int i, j;
	
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			
			tab[i][j]=0;
			
		}
	}
}

void mostratab(){
	int i, j;
	
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			
			if(tab[i][j]==0){
				printf("  | ");
					
			}else if(tab[i][j]==1){
				printf("* | ");
				
			}
		}
		
	}
}


int efetuajog(int desenho){ /*função onde será ligado pixel por pixel */
	int l, c;
	
	printf("\n\n~Qual pixel ligar %d~\n",desenho);
	printf("Linha: ");
	scanf("%d",&l);
	printf("Coluna: ");
	scanf("%d",&c);
	
		if(tab[l][c]==0){ //posição vazia
			tab[l][c]=desenho;
			
			return 1; //Pixel ligado
		
		}
}




int main(){
	int status;
	
	setlocale(LC_ALL,"");
	
	iniciatab();
	
	do{
		mostratab();
		status=efetuajog(player);
		
		if(status==1){
			
			if(player==1){
			
			
			}
		
		}
			
		
		
		
		getch();
		system("cls");
		
		
		
		
	}while(jog<=9);
	
	if(vitoria==0){
		printf("\nVELHA");
		
	}else{
		printf("\nJOGADOR %d VENCEU",vitoria);
	
	}
	
}

