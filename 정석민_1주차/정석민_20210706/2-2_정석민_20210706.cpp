/*
문제를 맞았을 때 더해지는 숫자 변수를 x라고 하자.
반복문을 통해 문자열을 순회한다.
    'O'가 등장하면 점수에 x를 더하고 x에 1을 더한다.
    'X'가 등장하면 x를 1로 설정한다.
점수를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for ( int i = 0; i < n; i++ ) {
        string s;
        int x = 1, score = 0;
        cin >> s;
        for ( int j = 0; j < s.length(); j++ ) {
            if ( s[j] == 'O' ) {
                score += x;
                x++;
            }
            else
                x = 1;
        }
        cout << score << '\n';
    }
}