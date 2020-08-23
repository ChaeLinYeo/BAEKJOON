#include <stdio.h>
int main(){
    int num = 0;    //입력받을 9개의 값
    int pos;    //값의 위치
    int max = num;  //최댓값을 일단 num과 일치시켜둔다.
    for(int i=1; i<=9; i++){    //9번 비교
        scanf("%d", &num);  //9번 값을 입력받는다.
        if(num>max){    //입력받은 값이 기존의 max=num값보다 크면
            max = num;  //max 값을 바꿔준다.
            pos = i;    //max에 들어간 현재 값의 위치를 저장한다.
        }
    }
    printf("%d\n%d", max, pos); //최댓값과 그 값의 순서 출력
    return 0;
}