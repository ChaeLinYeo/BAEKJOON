#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char quest[10]; //명령어
    int N;  //명령어 입력받을 횟수
    int front=0;  //큐의 앞
    int rear=0;   //큐의 뒤
    int queue[10000];    //큐
    int pushnum;    //push할 정수
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%s", quest);
        if(strcmp(quest, "push") == 0){
            scanf("%d", &pushnum);
            queue[rear] = pushnum;
            rear++;
        }

        if(strcmp(quest, "pop") == 0){
            if(rear - front == 0){
                printf("%d\n", -1);
            }else{
                printf("%d\n", queue[front]);
                front++;
            }
        }

        if(strcmp(quest, "size") == 0){
            printf("%d\n", rear-front);
        }

        if(strcmp(quest, "empty") == 0){
            if(rear - front == 0){
                printf("%d\n", 1);
            }else{
                printf("%d\n", 0);
            }
        }
        
        if(strcmp(quest, "front") == 0){
            if(rear - front == 0){
                printf("%d\n", -1);
            }else{
                printf("%d\n", queue[front]);
            }
        }

        if(strcmp(quest, "back") == 0){
            if(rear - front == 0){
                printf("%d\n", -1);
            }else{
                printf("%d\n", queue[rear-1]);
            }
        }
    }
    
}