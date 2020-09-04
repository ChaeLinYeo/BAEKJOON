#include<stdio.h>
int main (){
// 입력 : 
// scanf 사용
// 정수 %d, 실수 %f, 문자열 %s 사용
// scanf("%d", &var);
// 출력 : 
// 정수 %d, 실수 %f, 문자열 %s 사용
// 예) printf("%d", var);
// 필수 라이브러리 stdio.h
    int var;
    scanf("%d", &var);
    printf("%d", var-1946);
    return 0;
}