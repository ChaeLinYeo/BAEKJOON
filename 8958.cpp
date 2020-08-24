#include <iostream>
#include <string>
using namespace std;
int main(void){
    int T;  //테스트 케이스 개수
    string OX[100]; //넉넉하게 안주면 런타임 에러난다.
    int sum = 0;    //연속된 O의 점수
    int score = 0;  //최종 점수 출력
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> OX[i];
        sum = 0;
        score = 0;
        for(int j=0; j<OX[i].length(); j++){
            if(OX[i][j] == 'O'){
                sum++;
                score += sum;
            }else if(OX[i][j] == 'X'){
                sum = 0;
            }
        }
        cout << score << endl;
        OX[i] = '\0';
    }
    return 0;
}