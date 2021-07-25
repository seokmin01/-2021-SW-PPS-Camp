/*
'-'가 나오는 순간부터 다음 나오는 숫자들은 모두 뺄셈을 해주자.
기본값이 '+'인 연산자 변수를 선언하자.
result 변수를 선언한다.
문자열을 입력받고 문자열을 순회한다.
    문자가 숫자이면 숫자 변수에 저장한다.
    문자가 숫자가 아닐 때,
        연산자가 '+'이면 result에 숫자를 더한다.
        연산자가 '-'이면 result에 숫자를 뺀다.
        문자가 '-'이면 연산자를 '-'로 저장한다.
result를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int result = 0, n = 0;
    char op = '+';
    for ( auto c : s ) {
        if ( c >= '0' && c <= '9' )
            n = n * 10 + (c - '0');
        else {
            if ( op == '+' ) result += n;
            if ( op == '-' ) result -= n;
            if (  c == '-' ) op = '-';
            n = 0;
        }
    }
    if (op == '+') result += n;
    if (op == '-') result -= n;
    cout << result;
}