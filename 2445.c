#include <stdio.h>
int main(void){
	int n, i ,j;
	scanf("%d",&n);
	for(int i=n; i>0; i--){
		for(int j=n-i; j>=0; j--){
			printf("*");
		}
		for(int j=1; j<i*2-1; j++){
			printf(" ");
		}
		for(int j=i-1; j<n; j++){
			printf("*");
		}
		puts("");
	}
	for(int i=1; i<n; i++){
		for(int j=n-i; j>0; j--){
			printf("*");
		}
		for(int j=0; j<i*2; j++){
			printf(" ");
		}
		for(int j=i; j<n; j++){
			printf("*");
		}
		puts("");
	}
}