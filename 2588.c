#include <stdio.h>
int main(void){
	int a, b, n1,n2,n3, result1, result2, result3, result4;
	scanf("%d %d",&a, &b);
	n1=b/100;
	n2=(b-n1*100)/10;
	n3=b-n1*100-n2*10;
	printf("%d\n%d\n%d\n%d\n",a*n3,a*n2,a*n1,a*b);
}