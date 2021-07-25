/*
수열의 규칙을 파악해본다.
1  2  3  4  5
1  3  6  10 15
1  4  10 20 35
1  5  15 35 70
1  6  21 56 126
(k, n)의 숫자는 (k, n-1)의 숫자와 (k-1, n)의 숫자를 더한 수이다.
재귀 함수를 선언하자.
0번째 층일 때는 n을 return 하고,
1호일 때는 1을 return 한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func(int k, int n) {
    if ( k == 0 ) return n;
    if ( n == 1 ) return 1;
    return func(k, n-1) + func(k-1, n);
}

int main() {
    int t, k, n;
    cin >> t;
    for ( int i = 0; i < t; i++ ) {
        cin >> k >> n;
        cout << func(k, n) << '\n';
    }
}