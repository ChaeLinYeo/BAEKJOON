//시간 때문에 파이썬보다 c++, c로 푸는게 좋다.
#include <iostream>
using namespace std;
int main(){
    long long int N;
    int A, B;
    int Ascore = 0;
    int Bscore = 0;
    scanf("%lld", &N);
    for(int i=0; i<N; i++){
        scanf("%d %d", &A, &B);
        if(A > B) Ascore++;
        else if(B > A) Bscore++;
    }
    printf("%d %d", Ascore, Bscore);
}