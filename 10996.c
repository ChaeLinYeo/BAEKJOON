#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n == 1){
        printf("*\n");
    }else{
        for(int i=1; i<=2*n; i++){
            if(i % 2 == 1){ //홀수줄 
                if(n % 2 == 0) {    //입력한 수가 짝수일때
                    for(int i=0; i<n/2; i++){
                        printf("*");
                        printf(" ");
                    }
                }else{  //입력한 수가 홀수일때
                    for(int i=0; i<n/2+1; i++){
                        printf("*");
                        printf(" ");
                    }
                }
            }else{ //짝수줄
                if(n % 2 == 0){ //입력한 수가 짝수일때
                    for(int i=0; i<n/2; i++){
                        printf(" ");
                        printf("*");
                    }
                }else{  //입력한 수가 홀수일때
                    for(int i=0; i<n/2; i++){
                        printf(" ");
                        printf("*");
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}