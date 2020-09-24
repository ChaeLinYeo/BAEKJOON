#include <stdio.h>
int main(void){
	char alpa[100]={};
	int len=0;
	scanf("%s", alpa);
	for(int i=0; i<100; i++){
		len = alpa[i] != 0 ? len+=1 : len;
	}
	printf("%d\n",len);
}