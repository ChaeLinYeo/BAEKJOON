#include <stdio.h>
int main(void){
	int N, i=1;
	scanf("%d", &N);
	if(N<=100000){
		while(i <= N){
			printf("%d\n", i);
			i++;
		}
	}
}