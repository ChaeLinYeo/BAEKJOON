#include<stdio.h>
int main(void){
    int T, N, num;
    int sum = 0;
    scanf("%d", &T);    //테스트 케이스 입력
    for(int i=0; i<T; i++){
        scanf("%d", &N);    //자연수의 개수 입력
        for(int i=0; i<N; i++){
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}