#include<stdio.h>
int main (){
    int d1, d2;
    float area=0;
    scanf("%d %d", &d1, &d2);
    area = (2 * d2 * 3.141592) + 2*d1;
    printf("%f\n", area);
    return 0;
}