/*
t만큼 반복한다.
    한 라인을 입력받고
    규칙에 따라 연산을 해준다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    double n;
    string s;
    cin >> t;
    for ( int i = 0; i < t; i++ ) {
        cin >> n;
        getline(cin, s);
        for ( auto c : s ) {
            if ( c == '@' ) n *= 3;
            if ( c == '%' ) n += 5;
            if ( c == '#' ) n -= 7;
        }
        printf("%.2f\n", n);
    }
}