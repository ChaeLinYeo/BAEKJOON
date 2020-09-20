#include <iostream>
using namespace std;
int main(){
    int R, C;
    cin >> R;
    cin >> C;
    for (int i=0; i<R; i++){
        for(int j=0; j<C;j++){
            printf("*");
        }
        printf("\n");
    }
}