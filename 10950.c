#include <stdio.h>
int T;
int result;
int main(void){
	scanf("%d", &T);
	int A[T];
	int B[T];
	for(int i=0; i<T; i++){
		scanf("%d %d", &A[i], &B[i]);
	}
	for(int i=0;i<T;i++){
		printf("%d\n", A[i]+B[i]);
	}
}
