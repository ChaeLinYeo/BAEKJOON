#include<stdio.h>
unsigned long long int temp[10000]={1, 1};
unsigned long long int fib(int n){
    for(int i=2; i<n; i++){
        temp[i] = temp[i-1]+temp[i-2];
    }
    return temp[n-1];
}
int main(){
    int n;
    unsigned long long int fibnum;
    scanf("%d", &n);    //n번째 피보나치 수
    fibnum = fib(n);
    printf("%llu\n", fibnum);
    return 0;
}