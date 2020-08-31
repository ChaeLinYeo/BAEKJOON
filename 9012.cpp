#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isEmpty(string str){
    stack<char> stack; //스택
    int len = (int)str.length(); //문자열 길이

    for(int i=0; i<len; i++){
        char c=str[i];
        if(c == '('){  //여는 괄호이면 push
            stack.push(str[i]);
        }else if(c == ')'){    //닫는 괄호일 때
            if(!stack.empty()){ //스택이 비어있지 않으면, 즉 스택 내부에 여는 괄호가 있으면
                stack.pop();  //pop
            }else{  //스택이 비어있으면
                return false;
            }
        }
    }
    return stack.empty();
}

int main(){
    int T;  //테스트 케이스
    string str;    //입력받을 문자

    scanf("%d", &T);
    for(int i=0; i<T; i++){
        cin >> str;  //입력받은 문자
        if(isEmpty(str)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}