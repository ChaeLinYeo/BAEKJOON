#include <stdio.h>
int main(void){
	int length,sum=0;
	char num[101];
	scanf("%d",&length);
	scanf("%s",num);
	for(int i=0;i<length;i++){
		sum+=num[i]-'0';
	}
	printf("%d\n", sum);
}