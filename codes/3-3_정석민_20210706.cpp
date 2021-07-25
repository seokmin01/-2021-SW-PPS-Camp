/*
각 문자에서 3을 빼서 출력한다.
'A' 밑으로 가면 26을 더해서 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for ( char c : s ) {
        char x = c - 3;
        if ( x < 'A' ) x += 26;
        cout << x;
    }
}