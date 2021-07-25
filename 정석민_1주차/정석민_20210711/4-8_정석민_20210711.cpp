/*
a, b, c를 입력 받는다.
손익분기점을 n이라고 하자.
c * n이 a + b * n 보다 크게되는 n의 값을 찾아야한다.
n이 커질 수록 c * n과 a + b * n의 간격이 작아지면 손익분기점이 있는것이고 
아니면 없는것이다.
즉, c가 b보다 커야 손익분기점이 있다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long a, b, c, n = 0;
    cin >> a >> b >> c;
    if ( b >= c ) {
        cout << -1;
        return 0;
    }
    /* 1st try
    while ( c * n <= a + b * n ) {
        n++;
    }
    cout << n;
    */
    cout << a/(c-b) + 1;
}