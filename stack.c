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

// checa se a pilha esta cheia
int isFull() {
	if (top == CAPACITY - 1) {
		return 1;
	}
	else {
		return 0;
	}
}

// insere um elemento "ele" na pilha
void push(int ele) {
	if (isFull()) {
		printf("stack is full\n");
	}
	else {
		/*top becomes 0 if none element is
		inside*/
		top++;
		stack[top] = ele;
		printf("element %d inserted \n", ele);
	}
}

// checa se a pilha esta vazia
int isEmpty() {
	if (top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

// remove o último item da pilha
int pop() {
	int ele;
	if (isEmpty()) {
		printf("stack is empty");
		return 1;
	}
	else {
		ele = stack[top];
		top--;
		return ele;
	}
}
int main() {
	pop();
	printf("\n");
	push(4);
	pop();
	system("pause");
}
