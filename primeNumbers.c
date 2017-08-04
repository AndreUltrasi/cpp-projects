#include <stdio.h>
void primo(){
    int x,i;
    printf("Digite um número: ");
    scanf("%d",&x);
    if(x==1){
        printf("Você digitou o número 1\n");
        primo();
    }
    int i=x-1;
    while(1==1){
        if(i==1){
            printf("%d é primo\n",x);
            break;
        }else if(x%i==0){
            printf("%d não é primo",x);
            printf("\n%d%%%d = %d\n", x,i,x%i);
            break;
        }else if(x%i!=0)i--;
    }
}
int main(){
    while (1==1)primo();
}
            