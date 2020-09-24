#include <stdio.h>
int main(void){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(2<=a && b<=10000 && c<=10000){
		printf("%d\n", (a+b)%c);
		printf("%d\n", (a%c + b%c)%c);
		printf("%d\n", (a*b)%c);
		printf("%d\n", (a%c * b%c)%c);
	}
}