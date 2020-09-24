#include <stdio.h>
int main(void){
	int sum, result =0;
	int cost[10]={};
	scanf("%d",&sum);

	for(int i=0; i<9; i++){
		scanf("%d",&cost[i]);
	}

	for(int i=0; i<10; i++){
		result += cost[i];
	}
	printf("%d\n",sum-result);
}