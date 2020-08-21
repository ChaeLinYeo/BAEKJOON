#include <stdio.h>
int main(){
    int R1, R2, S;
    scanf("%d %d", &R1, &S);
    //S = (R1+R2)/2이므로
    //R2 = 2*S -R1으로 구할 수 있다.
    R2 = 2*S - R1;
    printf("%d\n", R2);
}