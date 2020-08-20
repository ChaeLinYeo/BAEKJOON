#include <stdio.h>
int main(){
    int money;
    int charge;//거스름돈
    //500, 100, 50, 10, 5, 1엔으로 거스름돈을 줄 수 있다.
    int cnt = 0;    //거스름돈 동전 개수
    scanf("%d", &money);    //지불한 돈 입력
    charge = 1000-money; //거스름돈 총계
    while(charge != 0){
        if(charge >= 500 && charge > 100){
            cnt++;
            charge = charge-500;
        }else if(charge >= 100 && charge > 50){
            cnt++;
            charge = charge-100;
        }else if(charge >= 50 && charge > 10){
            cnt++;
            charge = charge-50;
        }else if(charge >= 10 && charge > 5){
            cnt++;
            charge = charge-10;
        }else if(charge >= 5 && charge > 1){
            cnt++;
            charge = charge-5;
        }else if(charge >= 1){
            cnt++;
            charge = charge-1;
        }
    }
    printf("%d\n", cnt);
}