#include <stdio.h>
#include <string.h>
int main(void){
    char S[22] = {0,}; //문자열
    int T;  //테스트 캐이스 개수
    int R;  //문자열 S를 R번 반복
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf("%d %s", &R, S);  //반복횟수와 문자열을 받는다.
        for(int i=0; i<S[i]; i++){
            for(int i=0; i<R; i++){
                printf("%c", S[i]);
            }
        }
        printf("\n");
        S[0] = '\0';
    }
    return 0;
}