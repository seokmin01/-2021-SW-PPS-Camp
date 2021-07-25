/*
문자열을 입력받는다.
각 문자에 1을 더해서 다음 순서의 알파벳으로 이루어진 새로운 문자열을 생성한다.
반복문을 활용하여 출력 형식에 맞게 답을 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for ( int i = 0; i < n; i++ ) {
        cout << "String #" << i + 1 << '\n';
        string s;
        cin >> s;
        for ( int i = 0 ; i < s.length(); i++ ) {
            if ( s[i] == 'Z' )
                cout << 'A';
            else
                cout << (char)(s[i] + 1);
        }
        cout << "\n\n";
    }
}