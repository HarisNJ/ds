#include<stdio.h>
#include<stdbool.h>
#define MAX_VERTICES 100
//queue data structure for BFS typedef struct 
{
int items[MAX_VERTICES];
int front;
int rear;
}queue;

//function to initialise the queue void initialisequeue(queue*q)
{
q->front=-1;
q->rear=-1;
} 

//function to initialise the queue is empty
bool is empty(queue*q){
    return(q->front==-1);
}

//function to equeue an item into the queue
void enqueue(queue*q,int value)
{
    if(is empty(q)){
        q->front=0;
    }
    q->rear++;
    q->items[q->rear]=value;
    }

    //function to dequee an item from the queue
    int dequeue(queue*q){
        int value=q->items[q->front];
        q->front++;
        if(q->front>q->rear){
            initializequeue(q);
        }
        return value;
    }

    //function to perfor breadth-first search void bts(int graph[MAX_VERTICES][MAX_VERTICES],int startVertex,bool visited[MAX_VERTICES],int numVertices)
    {
    queue q;
    initializequeue(&q);
    printf("%d",startVertex);
    visited[startVertex]=true;
    enqueue(&q,startVertex);

    while(!isEmpty(&q)){
        intcurrentvertex=dequeue(&q);

        for(int i=0;i<numVertices;++i){
            if(graph[currentvertex][i]==1 && !visited[i]){
                printf("%d",i);
                visited[i]=true;
                enqueue(&q,1);
            }
        }
    }
    }

    int main(){
        int numvertices;

        //input the number of vertices
        printf("enter the number of vertices");
        scanf("%d",&numvertices);

        int graph[MAX_VERTICES][MAX_VERTICES];

        //inputthe adjacency matrix
        printf("enter the adjacency matrix:\n");
        for(int i=0;i<numvertices;++i){
            for(int j=0;j<numvertices;++j){
                scanf("%d",&graph[i][j]);

            }
        }

        //array to keep track of visited vertex
        bool visited[MAX_VERTICES];
        for(int i=0;i<numvertices;++i){
            visited[i]=false;
        }

        //start BFS from the first vertex(vertex 0)
            bfs(graph,0,visited,numvertices);

            return 0;
            }