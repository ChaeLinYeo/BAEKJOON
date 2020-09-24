#include <stdio.h>
int A, B, C, D;//공격, 쉼, 공격, 쉼
int P, M, N;
int att=0;
int P_point1, M_point1, N_point1;
int P_point2, M_point2, N_point2;
int P_bark = 0;
int M_bark = 0;
int N_bark = 0;
int main(void){
	scanf("%d %d %d %d",&A, &B, &C, &D);
	scanf("%d %d %d",&P, &M, &N);
	P_point1 = P%(A+B);
	M_point1 = M%(A+B);
	N_point1 = N%(A+B);

	P_point2 = P%(C+D);
	M_point2 = M%(C+D);
	N_point2 = N%(C+D);
	if(P_point1>0 && P_point1<=A)
		P_bark++;
	if(P_point2>0 && P_point2<=C)
		P_bark++;
	if(M_point1>0 && M_point1<=A)
		M_bark++;
	if(M_point2>0 && M_point2<=C)
		M_bark++;
	if(N_point1>0 && N_point1<=A)
		N_bark++;
	if(N_point2>0 && N_point2<=C)
		N_bark++;
	printf("%d\n%d\n%d\n", P_bark, M_bark, N_bark);
}