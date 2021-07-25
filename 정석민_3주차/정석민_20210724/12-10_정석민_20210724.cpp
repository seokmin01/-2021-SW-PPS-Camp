/*
n을 h로 나눈 나머지는 층이고,
n을 h로 나눈 몫 + 1은 호이다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, h, w, n, a;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> h >> w >> n;
        if ( n % h == 0 ) {
            a = h * 100;
            a += n / h;
        }
        else {
            a = (n % h) * 100;
            a += n / h + 1;
        }
        cout << a << '\n';
    }
}