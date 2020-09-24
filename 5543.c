#include <stdio.h>
int main(void){
	int a,b,c,coke,soda, cheapbuger, cheapdrink;
	scanf("%d %d %d %d %d",&a, &b, &c, &coke, &soda);
	if(a>=100 && a<=2000 && b>=100 && b<=2000 && c>=100 && c<=2000 && soda>=100 && soda<=2000 && coke>=100 && coke<=2000){
		if(a<=b && a<=c)
			cheapbuger=a;
		else if(b<=a && b<=c)
			cheapbuger=b;
		else if(c<=a && c<=b)
			cheapbuger=c;
		if(coke<=soda)
			cheapdrink=coke;
		else if(coke>=soda)
			cheapdrink=soda;
	printf("%d\n",cheapbuger+cheapdrink-50);
	}
}