include <stdio.h>
include <stdlib.h>
int main(){
    int n1[3][4],n2[3][4];
    for (int i = 0; i<2;i++){
        for (int j = 0; j<3; j++){
            printf("Índice [%d][%d]",i,j);
            scanf("%d",&n1[i][j]);