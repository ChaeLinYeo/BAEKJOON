#include <stdio.h>
int A, B, C;
int result[4];
int main(void){
	scanf("%d %d %d", &A, &B, &C);
	result[0] = (A+B)%C;
	result[1] = (A%C + B%C)%C;
	result[2] = (A*B)%C;
	result[3] = (A%C * B%C)%C;
	printf("%d\n%d\n%d\n%d\n",result[0], result[1], result[2], result[3]);
}