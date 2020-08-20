#include<stdio.h>
#include<math.h>
int main (){
    int n;
    scanf("%d", &n);
    double price;
    for(int i=0; i<n; i++){
        scanf("%lf",&price);
        price = price*0.8;  //20% 할인된 가격
        printf("$%.2f\n", price);   //소수점 둘째 자리까지 출력
    }
    return 0;
}