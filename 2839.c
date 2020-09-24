#include <stdio.h>
int main(void){
	int N=0, five=0, three=0;
	scanf("%d", &N);
	if(3<=N && N<=5000){
		five = N/5;
		N = N%5;
		while(five >= 0){
			if(N % 3 == 0){
				three = N/3;
				break;
			}
			else{
				N+=5;
				five--;
			}
		}
		printf("%d", five+three);
	}
	return 0;
}