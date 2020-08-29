#include<iostream>
using namespace std;
int main (){
    cin.tie(NULL);
    int N;  //첫째 줄에 수의 개수 N이 주어진다. (1 ≤ N ≤ 100,000)
    int A[100000];    //둘째 줄에는 A1, A2, ..., AN이 주어진다. (-1,000 ≤ Ai ≤ 1,000)
    int M;  //셋째 줄에는 구간의 개수 M이 주어진다. (1 ≤ M ≤ 100,000)
    int i, j;   //넷째 줄부터 M개의 줄에는 각 구간을 나타내는 i와 j가 주어진다. (1 ≤ i ≤ j ≤ N)
    int sum=0;  //총 M개의 줄에 걸쳐 입력으로 주어진 구간의 합
    cin >> N;
    for(int i=0; i<N; i++) cin >> A[i];
    cin >> M;
    for(int i=0; i<M; i++) {
        cin >> i >> j;
        for(int k = i-1; k<j; k++){
            sum = sum + A[k];
        }
        cout << sum << "\n";
        sum = 0;
    }
    return 0;
}