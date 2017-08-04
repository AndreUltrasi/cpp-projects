#include <stdio.h>
void primo(int x){
    for ( int i=x-1;;){
        if(i==1){
            printf("%d ",x);
            break;
        }else if(x%i==0){
            break;
        }else if(x%i!=0){
            i--;
        }
    }
}
int main(){
    while(1==1){
        int inicio,fim;
        printf("Início do Intervalo: ");
        scanf("%d", &inicio);
        if(inicio<2){
            inicio=2;
        }
        printf("Fim do Intervalo: ");
        scanf("%d", &fim);
        printf("Os valores primos no intervalo são:\n ");
        for(int i=inicio;i<fim;i++){
            if(i==(fim-1)){
                printf(" \n");
            }else {
                primo(i);
            }
        }
    }
}