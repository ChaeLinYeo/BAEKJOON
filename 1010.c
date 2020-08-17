#include <stdio.h>
int combination(int M, int N);

int main(void){
    int T;
    scanf("%d",&T); //테스트 개수 T를 입력받는다. 
    int N[T];   //서쪽의 사이트 개수 N을 입력받을 배열
    int M[T];   //동쪽의 사이트 개수 M을 입력받을 배열
    for (int i=0; i<T; i++){
        scanf("%d %d", &N[i], &M[i]);   //N과 M 값을 테스트 개수 T만큼 입력받는다.
    }

    // for (int i=0; i<T; i++){
    //     printf("%d %d", N[i], M[i]);
    // }    //N, M이 잘 입력받아졌는지 출력

    //MCN * N으로 해보자! 조합을 이용한다.
    //M개중에 N개를 고르고, 그걸 N개 각각에 적용하므로 위와 같은 식이 된다.
    for(int i=0; i<T; i++){
        printf("%d\n", combination(M[i], N[i]));
    }

    return 0;
}

int combination(int M, int N){  //조합 구하기
    if(M==N || N==0){
        return 1;
    }
    // nCr = (n-1)C(r-1) + (n-1)C(r) 조합의 식은 다음과 같다.
    return combination(M-1, N-1) + combination(M-1, N);
}