#include <stdio.h>
int main(void){
	char word[100];
	int cnt = 0, i=0;
	scanf("%s",word);
	while(word[cnt] != '\0'){
		cnt++;
		if(cnt!=0){
			printf("%c",word[i]);
			if((i+1)%10 == 0)
				printf("\n");
			i++;
		}
	}
}