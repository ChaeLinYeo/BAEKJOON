#include<stdio.h>
int main (){
    int E, S, M;
    int year = 1;
    int result;
    scanf("%d %d %d", &E, &S, &M);
    //(1 ≤ E ≤ 15, 1 ≤ S ≤ 28, 1 ≤ M ≤ 19)
    //year-E = 15*x
    //year-S = 28*y
    //year-M = 19*z
    while(1){
        if((year-E)%15==0 && (year-S)%28==0 && (year-M)%19==0){
            result = year;
            break;
        }else{
            year ++;
        }
    }
    printf("%d\n", result);
    return 0;
}