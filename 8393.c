#include <stdio.h>
int main(void){
	int n, sum=0;
	scanf("%d",&n);
	if(n>=1 && n<=10000){
		for(int i=1; i<=n; i++){
			sum+=i;
		}
		printf("%d",sum);
	}
}