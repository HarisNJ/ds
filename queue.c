#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#define MAX 5

int queue[MAX];
int front=-1;int rear=-1;

bool isFULL(){
if(rear==MAX-1){
returm 1;
}
else{
retur 0;
}}
 
 bool isEnd(){
 if(isFUL(){
 if(front==rear){
 return 1;
 }}
 return 0;
 }
 
 void reset(){
 front=-1;
 rear=-1;
 }
 
 void enqueue(){
 int value;
 printf("enter the number:");
 scanf("%d,&value);
 
 if(isEnd()){
 reset();
 rear=rear=1;
 queue[rear]=value;
 }
 else if(isFull()){
 printf("queue is full\n");
 }
 else
 rear=rear+1;
 queue[rear]=value;
 }}
 
 void dequeue(){
 int i;
 if(isEmpty()){
 printf("queue is empty\n");
 }
 else{
  printf("%d is dequeue\n",queue[front+1]);
  feont=front+1;
  }}
  
  void display(){
  int i;
  if(isEmpty()){
  printf("queue is empty\n");
  }
  else{
  for(i=front+1;i<=rear;i++){
  printf("queue[%d]is:%d\n",i+1,queue[i]);
  }
  }
  }
  
  intmain(){
  intopt;
  do{
  printf("\n............\n");
  printf("1)Enqueue\n");
  printf("2)Dequeue\n");
  printf("3)Display\n");
  printf("4)quiet\n");
  printf("\n..........\n);
  printf"choose your option:");
  scanf("%d",&opt);
  switch(opt){
  	case 1:
  	enqueue();
  	break;
  	case 2:
  	dequeue();
  	break;
  	case 3:
  	display();
  	break;
  	default:
  	printf("invalid option!try again....\n");
  	}
  	}while(opt!=0);return0;
  	}
