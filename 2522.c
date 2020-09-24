#include <stdio.h>
int main(void){
	int n, i ,j;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		for(int j=n-i; j>0; j--){
			printf(" ");
		}
		for(int j=1; j<=i; j++){
			printf("*");
		}
		puts("");
	}

	for(int i=n-1; i>0; i--){
		for(int j=n-i; j>0; j--){
			printf(" ");
		}
		for(int j=1; j<=i; j++){
			printf("*");
		}
		puts("");
	}
}