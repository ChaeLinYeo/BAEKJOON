#include <iostream>
#include <string>
using namespace std;
int main(void){
    //체스는 총 16개의 피스를 사용하며, 킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개로 구성
    int king, queen, rook, bishop, night, pon;
    cin >> king >> queen >> rook >> bishop >> night >> pon;
    cout << 1-king << " " << 1-queen << " " << 2-rook << " " << 2-bishop << " " << 2-night << " " << 8-pon;   
    return 0;
}