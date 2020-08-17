#include <stdio.h>
double combination(int M, int N){  //조합 구하기
    if(M==N || N==0){
        return 1;
    }
    if(N==1){
        return M;
    }
    // nCr = (n-1)C(r-1) + (n-1)C(r) 조합 공식이다.
    return combination(M-1, N-1) + combination(M-1, N);
}    //오버플로 방지하기위해 double

int main(void){
    int T,N,M;
    scanf("%d",&T); //테스트 개수 T를 입력받는다. 

    for (int i=0; i<T; i++){
        scanf("%d %d", &N, &M);   //N과 M 값을 테스트 개수 T만큼 입력받는다.
        printf("%.lf\n", combination(M, N));
    }
    //MCN * N으로 해보자! 조합을 이용한다.
    //M개중에 N개를 고르고, 그걸 N개 각각에 적용하므로 위와 같은 식이 된다.

    return 0;
}