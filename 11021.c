#include <stdio.h>
int main(void){
	int T, sum;
	scanf("%d",&T);
	int A[T+1], B[T+1];
	for(int i=1; i<=T; i++){
		scanf("%d %d",&A[i], &B[i]);
	}
	for(int i=1; i<=T; i++){
		printf("Case #%d: %d\n", i, A[i]+B[i]);
	}
}