#include<stdio.h>
int main(){
    int num[8]={0,};
    int max = 0;
    int temp = 0;
    //역    내린 사람 수    탄 사람 수
    //1     num[0]      num[1]
    //2     num[2]      num[3]
    //3     num[4]      num[5]
    //4     num[6]      num[7]
    for (int i=0; i<8; i++){
        scanf("%d", &num[i]);
    }
    temp = num[1];
    if(max < temp) max = temp;
    temp = temp - num[2] + num[3];
    if(max < temp) max = temp;
    temp = temp - num[4] + num[5];
    if(max < temp) max = temp;
    temp = temp - num[6];
    if(max < temp) max = temp;
    
    printf("%d\n",max);
    return 0;
}