#include<stdio.h>
#include <string.h>
int main (){
    int T;  //테스트 케이스 수
    int N;  //학교 수
    char S[20]; //학교 이름
    int L;  //해당 학교가 지난 한 해동안 소비한 술의 양
    int max=0;  //술 소비량 최대 비교
    char maxS[20];  //술 소비량이 최대인 학교

    scanf("%d", &T);
    for(int i=0; i<T; i++){ //테스트 케이스만큼 돈다.
        scanf("%d", &N);
        for(int i=0; i<N; i++){ //학교 수만큼 돈다.
            scanf("%s %d", S, &L);  //학교 이름과 술 소비량을 받는다.
            if(max < L){
                max = L;    //술 소비량 최대값을 바꾼다.
                for(int i=0; i<20; i++){
                    maxS[i] = S[i]; //술 소비량 최대 학교를 입력한다.
                }
            }
        }
        printf("%s\n",maxS);
    }
    return 0;
}