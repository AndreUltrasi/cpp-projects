#include <stdio.h>
#include <stdlib.h>
/*capacity = 5;
int stack[capacity];
eh impossivel dar uma variavel como
parametro a um array ou stack.
Mas eh possivel definir o valor e nome
de um macro e atruibui-lo como parametro*/
#define CAPACITY 5
int stack[CAPACITY];
int top = -1;

int isFull(){
	if (top == CAPACITY -1){
		return 1;
	} else {
		return 0;
	}
}
int push(int ele){
	if(isFull()){
	    printf("stack is full\n");
	} else {
		/*top becomes 0 if none element is
		inside*/
		top++;
		stack[top]=ele;
		printf("element %d inserted \n", ele);
	}
}
	
int pop(){
	int ele;
	if (isEmpty()){
		printf("stack is empty");
	}else{
		ele = stack[top];
		top--;
		return ele;
	}
}

int isEmpty(){
	if (top == -1){
		return 1;
	} else {
		return 0;
	}
}
int peek()	
int main(){
	
}