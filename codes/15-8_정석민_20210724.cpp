/*
오르막길 벡터를 선언하자.
max 변수를 선언하자.
n을 입력받고 n만큼 반복한다.
    p를 입력받는다.
    이전 수보다 더 크지 않은 p가 오면
        지금까지 오르막길의 크기를 구하고
        크기가 max보다 크면 max에 크기를 저장한다.
        오르막길 벡터를 초기화 한다.
    p를 벡터에 추가한다.
max를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> up;
    int d, max = 0;
    int n, p;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> p;
        if ( i > 0 && up[up.size()-1] >= p ) {
            d = up[up.size()-1] - up[0];
            if ( d > max ) max = d;
            up.clear();
        }
        up.push_back(p);
    }
    d = up[up.size()-1] - up[0];
    if ( d > max ) max = d;
    cout << max;
}