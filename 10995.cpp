#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2==0){
                cout << "*";
                cout << " ";
            }else{
                cout << " ";
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}