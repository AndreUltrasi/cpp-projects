#include <stdio.h>
#define CAPACITY 5 //Pre-processor macro
/*Stack implementation using static
array*/
int stack[CAPACITY], top =- 1;




void main(){
	int ch;
	while(1){
  	printf("1.Push \n");
  	printf("2.Pop \n");
  	printf("3.Peek \n");
	  printf("4.Traverse \n");
  	printf("5.Quit \n");
	
  	printf("Enter your choice: ");
  	scanf("%d",&ch);
  	
  	switch(ch){
  		case 1:push();
  		case 2:pop();
  		case 3:peek();
  		case 4:poll();
  		case 5:exit(0);
  		default: printf("Invalid input\n\n");
  	}
	}
}

push(){
  