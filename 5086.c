#include<stdio.h>
int main(void){
    int n1, n2;
    while(1){
        scanf("%d %d", &n1, &n2);
        if(n1 == 0 && n2 == 0){
            break;
        }
        else if(n2%n1 == 0){ //첫 번째 숫자가 두 번째 숫자의 약수라면
            printf("factor\n");
        }else if(n1%n2 == 0){   //첫 번째 숫자가 두 번째 숫자의 배수라면
            printf("multiple\n");
        }else{  //둘 다 아니라면 
            printf("neither\n");
        }
    }
    return 0;
}