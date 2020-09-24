#include <stdio.h>
int main(void){
	int n, temp, sum=0;
	scanf("%d",&n);
	int time[n];
	for(int i=0; i<n; i++){
		scanf("%d",&time[i]);
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(time[i]>time[j]){
				temp = time[i];
				time[i] = time[j];
				time[j] = temp;
			}
		}
	}
	for(int i=0; i<n; i++){
		sum += time[i];
		for(int j=0;j<i;j++){
			sum+=time[j];
		}
	}
	printf("%d\n", sum);
}