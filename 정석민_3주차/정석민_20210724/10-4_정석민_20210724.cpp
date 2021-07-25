/*
다음을 500번 반복한다.
    숫자가 1이면 break한다.
    숫자가 짝수이면 2로 나눈다.
    숫자가 홀수이면 3을 곱하고 1을 더한다.
반복문이 끝날 때 까지 1이 나오지 않았으면 -1을 반환한다.
반복된 수를 반환한다.
*/

#include <bits/stdc++.h>
using namespace std;

int solution(int num) {
    int i;
    long long n = num;
    for ( i = 0; i < 500; i++ ) {
        if ( n == 1 ) break;
        if ( n % 2 == 0 ) n /= 2;
        else n = n * 3 + 1;
    }
    if ( i == 500 ) return -1;
    return i;
}