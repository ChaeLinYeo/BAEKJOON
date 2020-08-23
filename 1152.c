#include <stdio.h>
#include <string.h>
int main(){
    char strings[1000002];  //문자열의 길이가 100만이라는 건 개행 문자를 빼고 말하는 것이기 때문에, 
    //\n까지 반드시 입력되는 것을 보장하려면 배열 크기가 1000002이고 fgets에도 1000002라고 전달해줘야 1000001번째 글자에 \n이, 
    //1000002번째 끌자에 널 문자가 들어갈 수 있다.
    int num=0;    //단어개수
    scanf("%[^\n]s", strings);    // 공백까지 포함하여 문자열 입력받기

    char *ptr = strtok(strings, " ");   // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환
    while(ptr != NULL){ // 자른 문자열이 나오지 않을 때까지 반복(문자열의 끝은 NULL임)
        ptr = strtok(NULL, " ");    // 다음 문자열을 잘라서 포인터를 반환
        //NULL을 넣었을 때는 직전 strtok 함수에서 처리했던 문자열에서 잘린 문자열만큼 다음 문자로 이동한 뒤 다음 문자열을 자른다.
        //왜냐하면, 처음에 strtok(strings, " ")를 하면 첫 공백 문자가 나올때 파싱이 된 뒤 " "부분이 NULL로 채워지기 때문이다.
        //따라서 그 다음 부분도 계속 파싱하기 위해서는 첫 파싱이 된 뒤 NULL 부터 다시 파싱해야 한다.
        //https://dojang.io/mod/page/view.php?id=376 참고!
        num++;  //단어개수 증가
    }
    printf("%d\n", num);
    return 0;
}