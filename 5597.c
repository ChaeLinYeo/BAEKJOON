#include <stdio.h>
int main(void){
	int n[30]={}, num, i;
	for(i=0; i<28; i++){
		scanf("%d",&num);
		n[num-1] = num;
	}
	for(i=0; i<30; i++){
		if(n[i] == 0)
			printf("%d\n",i+1);
	}
}