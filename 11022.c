#include <stdio.h>
int main(void){
	int testcase;
	scanf("%d", &testcase);
	int a[testcase], b[testcase];
	for(int i=0; i<testcase;i++){
		scanf("%d %d", &a[i], &b[i]);
	}
	for(int i=0; i<testcase; i++){
		printf("Case #%d: %d + %d = %d\n",i+1,a[i],b[i],a[i]+b[i]);
	}
}