#include <iostream>
using namespace std;
int main(){
    int A, B, C;
    cin >> A >> B;
    cin >> C;
    if (A+B >= 2*C) cout << A+B-2*C << endl;
    else if (A+B < 2*C) cout << A+B << endl;
}