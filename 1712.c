#include<stdio.h>
int main (){
    long A=0;   //A : 고정비용 
    long B=0;   //B : 가변비용 
    long C=0;   //C : 노트북 가격
    long num=1;    //판매개수
    //총 수입(판매비용) > 총 비용(고정비용+가변비용) --> 손익분기점
    //C*num > A + B*num 인 num을 찾아야 한다.
    //즉 num > A/(C-B)인 num을 찾아야 한다.
    //A / (C - B)를 하게 되면 나머지가 남을수도 있다. 
    //그렇지만 X의 값은 최초로 이익이 발생하는 판매량이기 때문에 소숫점을 무시하고 1을 더하면 해결이 된다.
    scanf("%ld %ld %ld", &A, &B, &C);
    if(B >= C){
        printf("-1\n"); //손익분기점이 존재하지 않으면 -1을 출력한다.
        return 0;
    }
    num = A/(C-B)+1;
    printf("%ld\n",num);
    //while문을 쓸 경우, 시간초과가 발생한다.
    return 0;
}