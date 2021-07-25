/*
M과 N을 입력 받는다.
그림을 이중 배열로 입력 받아보자.
이중 반복문을 통해 창문 하나하나를 판별해보자.
	5M+1, 5N+4 위치의 문자가 *이면 5번째 창문이다.
	위의 경우가 아니고, 5M+1, 5N+3 위치의 문자가 *이면 4번째 창문이다.
	위의 경우가 아니고, 5M+1, 5N+2 위치의 문자가 *이면 3번째 창문이다.
	위의 경우가 아니고, 5M+1, 5N+1 위치의 문자가 *이면 2번째 창문이다.
	위의 경우가 모두 아니면 1번째 창문이다.
	각각의 창문을 count한다.
5개 창문 count를 각각 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    
    char p[501][501];
    int count[5] = {0, };
    
    for ( int i = 0; i < 5 * m + 1; i++ ){
        for ( int j = 0; j < 5 * n + 1; j++ ) {
            cin >> p[j][i];
        }
    }
    
    for ( int i = 0; i < m; i++ ){
        for ( int j = 0; j < n; j++ ) {
            if( p[5*j+1][5*i+4] == '*' ) count[4]++;
            else if ( p[5*j+1][5*i+3] == '*' ) count[3]++;
            else if ( p[5*j+1][5*i+2] == '*' ) count[2]++;
            else if ( p[5*j+1][5*i+1] == '*' ) count[1]++;
            else count[0]++;
        }
    }
    
    for ( int i = 0; i < 5; i++ ){
        cout << count[i] << " ";
    }
}