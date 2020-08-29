#include<stdio.h>
int main (){
    int N=0;
    int sum=0;
    while(scanf("%d", &N) != EOF) sum += N;
    printf("%d\n", sum);
    return 0;
}