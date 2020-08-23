#include <iostream>
#include <string>
using namespace std;
int main(void){
    char chess[9][9];
    int white=0;

    for(int i=0; i<8; i++) cin >> chess[i];   //체스판 입력 받기

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(chess[i][j]=='F'){
                if((i+j)%2==0) white++;
            }
        }
    }
    cout<<white<<endl;
    return 0;
}