#include<stdio.h>
int main (){
    int x, y;
    scanf("%d %d", &x, &y);
    //1사분면 : x양수, y양수
    //2사분면 : x음수, y양수
    //3사분면 : x음수, y음수
    //4사분면 : x양수, y음수
    if(x>0 && y>0){
        printf("%d\n", 1);
    }
    if(x<0 && y>0){
        printf("%d\n", 2);
    }
    if(x<0 && y<0){
        printf("%d\n", 3);
    }
    if(x>0 && y<0){
        printf("%d\n", 4);
    }
    return 0;
}