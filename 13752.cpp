#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> k;
        for(int i=0; i<k; i++){
            cout << "=";
        }
        cout << "\n";
    }
}