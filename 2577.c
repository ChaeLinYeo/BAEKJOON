#include <stdio.h>
int A, B, C;
int mul=0;
int arr[10];
int main(void){
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	mul = A*B*C;
	while(mul != 0){
		arr[mul%10]+=1;
		mul/=10;
	}

	for(int i=0; i<10; i++){
		printf("%d\n", arr[i]);
	}
}