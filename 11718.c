#include <stdio.h>
int main(void){
	char a[101];
	while(gets(a) != '\0'){
		if(a[0] == ' ')
			break;
		else
			printf("%s\n",a);

	}
}