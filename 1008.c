#include <stdio.h>
int main(void){
	double a, b;
	scanf("%lf %lf", &a, &b);
	if(0<a && b<10){
		printf("%.9f", a/b);
	}
}