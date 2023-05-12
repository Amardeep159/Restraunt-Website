#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int *p;
};
int main(){
struct node *q;
    int size;
    printf("enter your size of the stack\n");
    scanf("%d",&size);
    create(size);
}