#include <stdio.h>
int main(void){
	int one, two, three, four, five;
	scanf("%d %d %d %d %d",&one, &two, &three, &four, &five);
	printf("%d\n", ((one*one)+(two*two)+(three*three)+(four*four)+(five*five))%10);
}