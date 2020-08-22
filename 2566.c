#include <stdio.h>
int main(){
    int num[9][9];
    for(int i=0; i<81; i++){
        scanf("%d", &num[i][i]);
    }
    return 0;
}