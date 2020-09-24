#include <stdio.h>
int gcd(int a, int b){//최대공약수
	while(b!=0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
	//printf("%d\n",a);
}


int lcd(int a, int b){//최소공배수
	int res = a*b/gcd(a,b);
	return res;
	//printf("%d\n",res);
}

int main(void){
	int a, b;
	scanf("%d %d",&a,&b);
	int gcd_r = gcd(a, b);
	int lcd_r = lcd(a, b);
	printf("%d\n%d\n",gcd_r, lcd_r);
}
