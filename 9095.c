#include <stdio.h>
int T;
int result[11];

int asw(int n){
	result[1]=1;//1
	result[2]=2;//1+1
	result[3]=4;//1+1+1, 1+2, 2+1, 3
	for(int i=4; i<=n; i++){
		result[i]=result[i-1]+result[i-2]+result[i-3];
	}
	return result[n];
}

int main(void){
	scanf("%d",&T);
	int n[T];
	int res[T];
	for(int i=0; i<T; i++){
		scanf("%d",&n[i]);
		res[i] = asw(n[i]);
	}
	for(int i=0; i<T; i++){
		printf("%d\n", res[i]);
	}
}