#include<stdio.h>

int main (){
    int A, B;
    int Anum[3];
    int Bnum[3];

    scanf("%d %d", &A, &B);
    
    Anum[0] = A/100;    //A의 100의자리
    Anum[1] = (A-(Anum[0]*100))/10; //A의 10의자리
    Anum[2] = A - (Anum[0]*100) - (Anum[1]*10); //A의 1의자리

    Bnum[0] = B/100;
    Bnum[1] = (B-(Bnum[0]*100))/10;
    Bnum[2] = B - (Bnum[0]*100) - (Bnum[1]*10);
    // for(int i=2; i>=0; i--){
    //     printf("%d",Anum[i]);
    // }
    // for(int i=2; i>=0; i--){
    //     printf("%d",Bnum[i]);
    // }
    A = (Anum[2]*100) + (Anum[1]*10) + Anum[0];
    B = (Bnum[2]*100) + (Bnum[1]*10) + Bnum[0];
    if(A>B){
        printf("%d\n", A);
    }else{
        printf("%d\n", B);
    }
    return 0;
}