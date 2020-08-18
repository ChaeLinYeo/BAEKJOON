#include <stdio.h>
#include <string.h>
int main(){
    int N;  //명령문 개수
    char quest[10]; //명령문
    int stack[10000];   //스택
    int pushnum;    //스택에 push할 정수
    int top = 0;    //스택의 맨 위

    scanf("%d", &N);    //명령문 개수를 입력받는다.
    for(int i=0; i<N; i++){
        scanf("%s", quest);
        if(strcmp(quest, "push")==0){
            scanf("%d", &pushnum);
            stack[top] = pushnum;
            top++;
        }

        if(strcmp(quest, "pop")==0){
            if(top == 0){
                printf("%d\n", -1);
            }else{
                printf("%d\n", stack[top-1]);
                top--;
            }
        }

        if(strcmp(quest, "size")==0){
            printf("%d\n", top);
        }

        if(strcmp(quest, "empty")==0){
            if(top == 0){
                printf("%d\n", 1);
            }else{
                printf("%d\n", 0);
            }
        }

        if(strcmp(quest, "top")==0){
            if(top == 0){
                printf("%d\n", -1);
            }else{
                printf("%d\n", stack[top-1]);
            }
        }
    }
}