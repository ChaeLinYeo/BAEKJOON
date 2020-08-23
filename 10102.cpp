#include <iostream>
#include <string>
using namespace std;
int main(void){
    int V;    //심사위원의 수
    cin >> V;
    int A = 0;
    int B = 0;
    char vote[V];   //심사위원의 투표
    for(int i=0; i<V; i++) {
        cin >> vote[i];
        if(vote[i] == 'A') A++;
        if(vote[i] == 'B') B++;
    }
    if(A>B) cout << "A" << endl;
    if(B>A) cout << "B" << endl;
    if(A==B) cout << "Tie" << endl;
    return 0;
}