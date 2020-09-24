#include <stdio.h>
int num[10];
int num_result[42];
int cnt = 0;
int i;
int a;
int main(void){
	for(i = 0; i<10; i++){
		scanf("%d",&num[i]);
		num_result[num[i] % 42] = 1;
	}

	for(a = 0; a<42; a++){
		if(num_result[a] == 1){
			cnt++;
		}
	}
	printf("%d\n", cnt);
}