S = list(input()) #알파벳 소문자로만 이루어진 단어
alphabet = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
answer = [-1]*26
#아스키코드로 소문자 a는 97이다.
#따라서 97-97 = 0이 answer의 첫번째 자리 0인 것을 이용해 푼다.
#문자를 아스키코드로 바꾸기 위해 ord()를 사용한다.
for i in range(len(S)): 
    if answer[ord(S[i])-97] != -1:
        continue
    else:
        answer[ord(S[i])-97] = i
print(' '.join(map(str, answer)))  #정수 리스트를 문자열로 바꿔 출력