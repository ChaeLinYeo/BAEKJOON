#include <stdio.h>
int main(void){
	int n, num[5], warning=0;
	scanf("%d", &n);
	for(int i=0; i<5; i++){
		scanf("%d", &num[i]);
	}
	for(int i=0; i<5; i++){
		if(n == num[i]){
			warning++;
		}
	}
	printf("%d\n",warning);
}