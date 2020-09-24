#include <stdio.h>
int main(void){
	int N;
	scanf("%d", &N);
	if(N>=1 && N<=100){
		for(int i=1; i<=N; i++){
			for(int j=1; j<=i; j++){
				printf("*");
			}
			printf("\n");
		}
	}
}