#include <stdio.h>
int main(void){
	int n,x;
	scanf("%d %d",&n,&x);
	if(1<=n && x<=10000){
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d",&a[i]);
		}
		for(int i=0; i<n; i++){
			if(a[i]<x){
				printf("%d", a[i]);
				printf(" ");
			}
		}
	}
}