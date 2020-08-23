#include <stdio.h>
int main(){
    int num[9][9];
    int max=0;  //배열의 최댓값
    int x, y;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &num[i][j]);
            if(max < num[i][j]) {
                max = num[i][j];
                x = i+1;
                y = j+1;
            }
        }
    }
    printf("%d\n%d %d\n", max, x, y);
    return 0;
}