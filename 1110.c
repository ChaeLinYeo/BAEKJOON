#include <stdio.h>
int main(void){
	int n, left, right, next,sum, num, i=0;
	scanf("%d",&n);
	if(n>=0 && n<=99){
		num=n;
		while(n!=num || i==0){
			left = num/10;
			right = num%10;
			sum = left + right;
			next = sum%10;
			num = (right*10) + next;
			i++;
		}
		printf("%d\n",i);
	}
}