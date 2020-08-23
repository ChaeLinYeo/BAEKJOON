#include <iostream>
using namespace std;
int main(void){
    string abc;
    int num=0;
    cin >> abc;
    for(int i=0; i<abc.size(); i++){
        if(abc[i] == 'a' || abc[i] == 'e' || abc[i] == 'i' || abc[i] == 'o' || abc[i] == 'u') num++;
    }
    cout << num << endl;
    return 0;
}