#include<stdio.h>
int main(){
    int num[4];
    int sum=0;   //배와 등 수를 더하기
    for(int i=0; i<3; i++){
        for(int i=0; i<4; i++){
            scanf("%d", &num[i]);
            sum+=num[i];
            //printf("입력수 : %d ", num[i]);
        }
        //배(0)와 등(1)
        //도(배 한 개, 등 세 개), 개(배 두 개, 등 두 개), 걸(배 세 개, 등 한 개), 윷(배 네 개), 모(등 네 개)
        //도는 A, 개는 B, 걸은 C, 윷은 D, 모는 E
        //sum이 3이면 도, 2이면 개, 1이면 걸, 0이면 윷, 4이면 모
        if(sum == 3) printf("A\n");
        if(sum == 2) printf("B\n");
        if(sum == 1) printf("C\n");
        if(sum == 0) printf("D\n");
        if(sum == 4) printf("E\n");
        sum = 0;    //합 초기화 반드시 해줘야함!!
    }
    return 0;
}