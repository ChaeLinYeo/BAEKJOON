#include <stdio.h>
#include <string.h>

int main(void){
	char s[100];
	int abc[26]={0};
	scanf("%s", s);
	for(int i=0; i<strlen(s); i++){
		abc[s[i]-'a']++;
	}
	for(int i=0; i<26; i++){
		printf("%d ", abc[i]);
	}
	printf("\n");
}