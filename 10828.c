#include <stdio.h>
#include <string.h>
int main(){
    int N;  //명령문 개수
    char quest[10]; //명령문
    int stack[10000];   //스택
    int pushnum;    //스택에 push할 정수
    int top = 0;    //스택의 맨 위

//예시
//quest     top     stack
//          0       stack[0] = 0
//push 1    1       stack[0] = 1
//push 2    2       stack[1] = 2
//pop       1       

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
                //pop되었을때 증가한 top값에서 1을 빼야 한다.
                //예시를 보면 알겠지만, pop될 정수를 출력하기 위해서는 top-1자리에 있는 것을 출력해야 한다.
                //안그러면 0이 출력됨!!
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
                printf("%d\n", stack[top-1]);   //위의 설명과 동일
            }
        }
    }
    return 0;
}