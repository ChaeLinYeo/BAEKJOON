#include <stdio.h>
int main(){
    int n;
    int nn=0;
    scanf("%d",&n);
    for(int i=0; i<2*n-1; i++){
        for(int i=nn; i<n; i++){
            printf("*");
        }
        printf("\n");
    }
}