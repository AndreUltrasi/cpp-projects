#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* A;//global variable
void Insert(int x){
	Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data= x;
	temp ->next = NULL;
	head = temp;
int main(){
	A = NULL;//empty list
	printf("How many numbers?\n");
	int n,i,x;
	scanf("%d",&n);
	for (i = 0;i<n;i++){
		printf("Enter the number\n");
		scanf("%d",&x);
		Insert(x);
		Print();
	}
}
