/*
반복문을 이용해서 10개의 문자를 출력하면
줄바꿈을 한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for ( int i = 0; i < s.length(); i++ ) {
        cout << s[i];
        if ( i % 10 == 9 ) cout << '\n';
    }
}