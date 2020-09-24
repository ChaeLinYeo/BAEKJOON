#include <stdio.h>
int main(void){
	char algo[100]={};
	scanf("%s",algo);
	int len=0;
	for(int i=0; i<100; i++){
		if(algo[i] != 0)
			len++;
	}
	for(int i=0; i<len; i++){
		if(algo[i]>=65 && algo[i]<=90){
			printf("%c",algo[i]);
		}
	}
}