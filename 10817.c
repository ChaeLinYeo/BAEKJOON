#include <stdio.h>
int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(1<=a && a<=100 && 1<=b && b<=100 && 1<=c && c<=100){
		if((a<=b && b<=c) || (c<=b && b<=a)){
			printf("%d\n", b);
		}
		else if((a<=c && c<=b) || (b<=c && c<=a)){
			printf("%d\n", c);
		}
		else
			printf("%d\n", a);
	}
}