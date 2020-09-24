#include <stdio.h>
int N;
int M=0;
double result;
int main(void){
	scanf("%d",&N);
	double score[N];
	for(int i=0; i<N; i++){
		scanf("%lf",&score[i]);
	}
	for(int i=0;i<N;i++){
		if(score[i]>M) 
			M = score[i];
	}
	for(int i=0; i<N; i++){
		result = result + ((score[i]/M)*100);
	}
	printf("%f\n", result/N);
}