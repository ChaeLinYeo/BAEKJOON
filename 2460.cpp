#include <iostream>
using namespace std;
int main(void){
    int people_out; //내린 사람
    int people_in;  //탑승한 사람
    int num=0;  //현재 탄 승객 수
    int max=0;
    for(int i=0; i<10; i++){
        cin >> people_out >> people_in; //내린사람, 탄사람 순서대로 입력받음.
        num = num - people_out + people_in;
        if(max < num) max = num;
    }
    cout << max <<endl;
    return 0;
}