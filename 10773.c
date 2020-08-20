#include <stdio.h>
int main(void){
    int K;
    int cmd;
    int stack[100000];
    int top = 0;
    int sum = 0;
    scanf("%d", &K);
    for(int i=0; i<K; i++){
        scanf("%d", &cmd);
        if(cmd == 0){   //정수가 "0" 일 경우에는 가장 최근에 쓴 수를 지운다.
            if(top != 0){
                top--;
                // printf("pop됨,top : %d\n",top);
            }
        }else{  //아닐 경우 해당 수를 쓴다.
            stack[top] = cmd;
            top++;
            // printf("push됨,top : %d\n",top);
        }
    }
    for(int i=0; i<top; i++){
        sum += stack[i];
    }
    printf("%d\n",sum);
    return 0;
}