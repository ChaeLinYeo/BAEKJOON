#include <stdio.h>
int main(void){
	int MONTH[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	char DAY[7][4]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
	int m, d, cnt=0;
	scanf("%d %d",&m,&d);
	if(m>=1 && m<=12 && d>=1 && d<=31){
		for(int i=1; i<=m; i++){
			if(i==m){
				cnt+=d;
			}
			else{
				cnt+=MONTH[i-1];
			}
		}
		printf("%s",DAY[cnt%7]);
	}
}