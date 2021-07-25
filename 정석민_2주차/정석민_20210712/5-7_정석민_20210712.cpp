/*
문자열을 입력받고 문자열을 순회한다.
    =과 -은 세지 않는다.
    j가 나왔을 때 전의 알파벳이 l이나 n이면 건너뛴다.
    dz=가 연속으로 나오는 경우에는 count에서 1을 뺀다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    for ( int i = 0; i < s.length(); i++ ) {
        if ( i > 1 ) {
            if ( s[i] == '=' && s[i-1] == 'z' && s[i-2] == 'd' ) {
                count--;
                continue;
            }
        }
        if ( s[i] == '=' || s[i] == '-' ) continue;
        if ( i > 0 ) {
            if ( s[i] == 'j' ) {
                if ( s[i-1] == 'l' || s[i-1] == 'n' ) continue;
            }
        }
        count++;
    }
    cout << count;
}