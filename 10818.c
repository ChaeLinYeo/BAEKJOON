#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n); //정수의 개수 n개를 입력받는다. 
    int numArr[n];  //길이 n의 정수 배열 생성
    for (int i=0; i<n; i++){    //n개의 정수를 각각 입력받는다.
        scanf("%d",&numArr[i]);
    }
    int min = numArr[0];    //min을 입력받은 n개의 정수 중 첫번째로 설정한다.
    int max = numArr[0];    //max를 입력받은 n개의 정수 중 첫번째로 설정한다.
    
    // for (int i=0; i<n; i++){
    //     printf("%d ", numArr[i]);
    // }    //입력받은 정수 잘 받았는지 출력하기

    for (int i=0; i<n; i++){    //정수 배열의 크기만큼 for문을 돌면서
        if(numArr[i] < min){    //정수 배열의 각 자릿수가 min보다 작으면
            min = numArr[i];    //min을 대체
        }
        else if(numArr[i] > max){   //정수 배열의 각 자릿수가 max보다 크면
            max = numArr[i];    //max를 대체
        }
    }
    printf("%d %d", min, max);  //최대, 최솟값 출력
    return 0;
}