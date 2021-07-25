/*
반복문으로 5명의 점수를 입력받는다.
가장 높은 점수와 그 점수가 나온 번호를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int max = 0, s;
    int max_i;
    for ( int i = 1; i <= 5; i++ ){
        int score = 0;
        for ( int j = 0; j < 4; j++ ) {
            cin >> s;
            score += s;
        }
        if ( score > max ) {
            max = score;
            max_i = i;
        }
    }
    cout << max_i << " " << max;
}