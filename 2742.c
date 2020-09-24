#include <stdio.h>
int main(void){
	int N, i=0;
	scanf("%d", &N);
	if(N<=100000){
		i=N;
		while(i>0){
			printf("%d\n", i);
			i--;
		}
	}
}