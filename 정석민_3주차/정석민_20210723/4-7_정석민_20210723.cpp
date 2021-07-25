/*
숫자를 문자열로 변환 후 순회하여 자리 수의 합을 구한다.
숫자가 자리 수의 합으로 나누어 떨어지면 true를,
아니라면 false를 반환한다.
*/

#include <bits/stdc++.h>
using namespace std;

bool solution(int x) {
    int sum = 0;
    for ( auto c : to_string(x) )
        sum += c - '0';
    if ( x % sum == 0 ) return true;
    return false;
}