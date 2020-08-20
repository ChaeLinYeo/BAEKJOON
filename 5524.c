#include<stdio.h>
#include<string.h>
int main (){
    int n;
    char name[22];
    //ASCII값으로 A = 65, a = 97
    //대문자와 소문자의 값 차이는 32이다.
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%s", name);
        for(int i=0; i<strlen(name); i++){
            if(97-name[i]>0){ //알파벳이 대문자이면
                name[i]+=32;    //32를 더해서 소문자로 만들어준다.
            }
        }
        printf("%s\n", name);
    }
    return 0;
}