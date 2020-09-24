#include <stdio.h>
int main(void){
	int n, i, j;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		for(j=i; j>0; j--){
			printf(" ");
		}
		for(j=n*2-1; j>2*i; j--){
			printf("*");
		}
		printf("\n");
	}
}