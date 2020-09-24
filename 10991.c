#include <stdio.h>
int main(void){
	int N,i,j,k;
	scanf("%d",&N);
	for(i=1; i<=N; i++){
		for(j=i; j<=N-1; j++){
			printf(" ");
		}
		for(k=1;k<=i*2-1;k++){
			if(k%2==1)//홀수
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}