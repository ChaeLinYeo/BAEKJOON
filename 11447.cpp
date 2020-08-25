#include<iostream>
using namespace std;
int main (){
    int N, v;   //정수의 개수 N, 찾고자 하는 정수 v
    cin >> N;
    int num[N]; //둘째 줄에 정수 리스트를 받는다.
    int cnt = 0;    //정수 리스트에서 v의 개수
    for(int i=0; i<N; i++) cin >> num[i];
    cin >> v;
    for(int i=0; i<N; i++){
        if(num[i] == v) cnt++;
    }
    cout << cnt << endl;
    return 0;
}