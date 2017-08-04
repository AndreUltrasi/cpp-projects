#include<stdio.h>

int tuts(){
	int num[5], i, j, k;
	int r=0, e;
	for(i=0;i<5;i++){
		scanf("%d", &num[i]);
	}
	for(j=0;j<=5;j++){
		for(k=0;k<=5;k++){
			if(num[k]<num[k+1]){
				r=num[k];
				num[k]= num[k+1];
				num[k+1]=r;
			}//fechando if
		}//fechando for
	}//fechando fortuts();
	printf("\n");
	for(e=0;e<5;e++){
		printf("%d\n", num[e]);

	}

}
int main(){
	tuts();
}