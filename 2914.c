#include<stdio.h>
int main (){
    int A, I;
    int num;
    scanf("%d %d", &A, &I); //앨범에 수록된 곡의 개수 A와 평균값 I
    // I = (창영이 앨범에 수록된 곡에 포함되어 있는 저작권이 있는 멜로디의 개수) / (앨범에 수록된 곡의 개수)
    num = A*(I-1)+1;
    printf("%d\n", num);
    return 0;
}