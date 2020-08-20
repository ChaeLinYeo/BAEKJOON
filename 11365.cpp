#include <iostream>
#include <string>
using namespace std;    //std에는 cout, cin, endl 등 자주 쓰이는 함수들이 정의 되어 있다.
int main(){
    string s;
    while(1){
        getline(cin, s);
        if (s == "END") {
            break;
        }
        for(int i=s.length()-1; i>=0; i--){
            cout<<s[i];
        }
        cout<<"\n";
    }
    return 0;
}
//g++ 11365.cpp 로 컴파일할것.