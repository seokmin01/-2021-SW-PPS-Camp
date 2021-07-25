/*
이동 기록을 set에 저장하자.
처음 좌표를 0, 0으로 설정하자.
dirs를 순회하자.
    경계를 넘지 않고 이동했으면
    원래좌표 + 현재좌표의 값을 set에 저장한다.
set의 크기를 반환한다.
*/

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int solution(string dirs) {
    int x = 0, y = 0;
    unordered_set<string> s;
    string str1, str2;
    for ( auto c : dirs ) {
        int tmp_x = x;
        int tmp_y = y;
        bool go = false;
        if ( c == 'U' ) {
            if ( y < 5 ) {
                y++;
                go = true;
            }
        }
        if ( c == 'D' ) {
            if ( y > -5 ) {
                y--;
                go = true;
            }
        }
        if ( c == 'R' ) {
            if ( x < 5 ) {
                x++;
                go = true;
            }
        }
        if ( c == 'L' ) {
            if ( x > -5 ) {
                x--;
                go = true;
            }
        }
        if ( go == true ) {
            str1 = to_string(tmp_x) + to_string(tmp_y) + to_string(x) + to_string(y);
            str2 = to_string(x) + to_string(y) + to_string(tmp_x) + to_string(tmp_y);
            if ( s.find(str1) == s.end() || s.find(str2) == s.end() ) {
                s.insert(str1);
                s.insert(str2);
            }
        }
    }
    return s.size() / 2;
}