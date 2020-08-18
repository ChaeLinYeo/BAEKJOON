#include <stdio.h>
int main(){
    int C;  //케이스의 개수
    float N;    //학생 수
    int score[1002];    //N명의 점수
    float avg = 0;    //평균점수
    float student = 0;    //평균점수를 넘는 학생 수
    float rate;   //평균 점수를 넘는 학생의 비율
    scanf("%d", &C);    //테스트 케이스 수를 입력받는다.
    for(int i=0; i<C; i++){
        scanf("%f", &N);    //테이스 케이스 마다의 학생 수를 입력받는다.
        for(int i=0; i<N; i++){
            scanf("%d", &score[i]); //N명의 학생의 점수를 입력받는다.
            avg += score[i];
        }
        avg = avg/N;    //평균점수
        for(int i=0; i<N; i++){ //평균 점수 넘는 학생 수 계산
            if(score[i] > avg){
                student+=1;
            }
        }
        rate = (student/N) * 100;
        printf("%.3f%%\n", rate);   //숫자와 함께 %기호를 출력하기 위해서는 중복해서 써준다.
        avg = 0;
        student = 0;
    }
    return 0;
}