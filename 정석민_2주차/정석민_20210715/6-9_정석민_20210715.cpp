/*
크기가 10인 점수판 배열을 선언하자.
10번의 프레임이 채워질 때 까지 반복한다.
    '-' 일 때 계산의 편의를 위해 값을 '0'으로 바꾸자.
    숫자일 때, 'P'일 때, 'S'일 때를 나눠서 점수를 계산한다.
    규칙이 복잡하므로 디버깅을 해보면서 코드를 짜보자.
점수판의 점수를 다 더하고 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int score[10] = {0,};
    string s;
    cin >> s;
    int frame = 0; // 0일 때 1번째 프레임, 1일 때 2번째 프레임
    int times = 0; // 0일 때 1번째 시도, 1일 때 2번째 시도
    int i = 0, max_times = 2;
    while ( frame < 10 ) {
        if ( frame == 9 ) {
            if ( times == 0 && s[i] == 'S' ) max_times = 3;
            if ( times == 1 && s[i] == 'P' ) max_times = 3;
        }
        if ( s[i] == '-' ) s[i] = '0';
        if ( s[i] >= '0' && s[i] <= '9' ) {
            if ( times <= 1 && (i > 1 && s[i-2] == 'S') )
                score[frame-1] += s[i] - '0';
            if ( times == 0 && (i > 0 && (s[i-1] == 'S' || s[i-1] == 'P')) )
                score[frame-1] += s[i] - '0';
            score[frame] += s[i] - '0';
            times++;
        }
        if ( s[i] == 'P' ) {
            if ( times <= 1 && (i > 1 && s[i-2] == 'S') )
                score[frame-1] += 10 - (s[i-1] - '0');
            score[frame] += 10 - (s[i-1] - '0');
            times++;
        }
        if ( s[i] == 'S' ) {
            if ( times <= 1 && (i > 1 && s[i-1] == 'S' && s[i-2] == 'S') )
                score[frame-2] += 10;
            if ( times == 0 && (i > 0 && (s[i-1] == 'S' || s[i-1] == 'P')) )
                score[frame-1] += 10;
            score[frame] += 10;
            if ( frame == 9 ) times++;
            else times+=2;
        }
        if ( times >= max_times ) {
            frame++;
            times = 0;
        }
        i++;
    }
    int score_sum = 0;
    for ( i = 0; i < 10; i++ ) {
        //cout << i+1 << ":\t" << score[i] << '\n'; //DEBUG
        score_sum += score[i];
    }
    cout << score_sum;
}