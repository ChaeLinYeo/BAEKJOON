#include<stdio.h>
int fib(int n){ //피보나치 재귀함수
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    int fibnum;
    scanf("%d", &n);    //n번째 피보나치 수
    for(int i=0; i<=n; i++){    //0부터 시작해서 n번째까지 돌림.
        fibnum = fib(n);    //재귀함수 돌림.
    }
    printf("%d\n", fibnum);
    return 0;
}