#include <stdio.h>
int T;
int temp;
int min = 1001;
int main(void){
	scanf("%d",&T);
	int n[T];
	for(int i=0; i<T; i++){
		scanf("%d",&n[i]);
	}
	for(int i=0; i<T; i++){
		for(int j=i; j<T; j++){
			if(n[i]>n[j]){
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	//printf("-----\n");
	for(int i=0;i<T;i++){
		printf("%d\n",n[i]);
	}
}