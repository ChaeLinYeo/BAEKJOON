#include <stdio.h>

int fac(int N){
    if(N == 0 || N == 1) return 1;
    return N*fac(N-1);
}

int main(void){
    int N, num;
    scanf("%d", &N);
    //첫째 줄에 정수 N(0 ≤ N ≤ 12)가 주어진다.
    num = fac(N);
    printf("%d\n", num);
    return 0;
}