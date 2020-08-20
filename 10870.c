#include<stdio.h>
unsigned long long int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    unsigned long long int fibnum;
    scanf("%d", &n);    //n번째 피보나치 수
    fibnum = fib(n);
    printf("%llu\n", fibnum);
    return 0;
}