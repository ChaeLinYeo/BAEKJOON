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

    //enqueue는 rear에서, dequeue는 front에서 일어난다.
    // front(dequeue)             rear(enqueue)
    //      ---------------------
    //  <-                   2 1  <-
    //      ---------------------

    //예시
    //quest    rear    front    queue
    //          0       0       
    //push 1    1       0       queue[0] = 1   
    //push 2    2       0       queue[1] = 2
    //pop       2       1       

    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%s", quest);
        if(strcmp(quest, "push") == 0){
            scanf("%d", &pushnum);  //push 할 정수를 입력받는다.
            queue[rear] = pushnum;  //queque의 뒤에 정수를 입력한다. 
            rear++;
        }

        if(strcmp(quest, "pop") == 0){
            if(rear - front == 0){  //큐가 비어있다면
                printf("%d\n", -1); //-1 출력
            }else{
                printf("%d\n", queue[front]);   //pop할 정수 출력
                front++;    //pop되었으므로 front를 증가해주면 배열에서 값을 삭제하지 않아도 됨.
                //큐 구현 시 front, rear값으로만 조절함.
            }
        }

        if(strcmp(quest, "size") == 0){ //위의 주석에서의 예제를 보면 알겠지만 rear-front를 하면 큐의 사이즈가 나옴.
            printf("%d\n", rear-front);
        }

        if(strcmp(quest, "empty") == 0){
            if(rear - front == 0){  //큐의 사이즈가 0이면
                printf("%d\n", 1);
            }else{
                printf("%d\n", 0);
            }
        }
        
        if(strcmp(quest, "front") == 0){
            if(rear - front == 0){  //큐의 사이즈가 0이면
                printf("%d\n", -1);
            }else{
                printf("%d\n", queue[front]);   //queue의 front에 들어있는 수 출력
            }
        }

        if(strcmp(quest, "back") == 0){
            if(rear - front == 0){  //큐의 사이즈가 0이면
                printf("%d\n", -1);
            }else{
                printf("%d\n", queue[rear-1]);//queue의 back에 들어있는 수 출력
            }
        }
    }
    
}