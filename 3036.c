#include <stdio.h>
int gcd(int, int);
int main(void){
	int n;
	scanf("%d",&n);
	int pie[n];
	for(int i=0; i<n; i++){
		scanf("%d", &pie[i]);
	}
	for(int i=1; i<n; i++){
		printf("%d/%d\n", pie[0]/gcd(pie[0],pie[i]), pie[i]/gcd(pie[0],pie[i]));
	}
}

int gcd(int x, int y){
	if(y == 0)
		return x;
	else
		return gcd(y, x%y);
}