#include <stdio.h>
int main(){
    int num = 0;
    int pos;
    int max = num;
    for(int i=1; i<=9; i++){
        scanf("%d", &num);
        if(num>max){
            max = num;
            pos = i;
        }
    }
    printf("%d\n%d", max, pos);
}