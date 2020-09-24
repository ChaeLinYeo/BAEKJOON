#include <stdio.h>
int main(void){
	int n[10000];
	int a, b, result=0;
	while(1){
		scanf("%d %d", &a, &b);
		if(a==0 && b==0)
			break;
		else{
			n[result] = a+b;
			result++;
		}
	}
	for(int i=0; i<result; i++){
		printf("%d\n",n[i]);
	}
}