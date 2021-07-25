/*
unordered_set을 선언한다.
n을 입력받고 n만큼 반복한다.
    정수를 입력받고 set에 저장한다.
m을 입력받고 m만큼 반복한다.
    정수를 입력받고 그 수가 set에 있는지 확인한다.
    set에 있으면 1을 출력하고 없으면 0을 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    unordered_set<int> s;
    int n, m, a;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> a;
        s.insert(a);
    }
    cin >> m;
    for ( int i = 0; i < m; i++ ) {
        cin >> a;
        if ( s.find(a) != s.end() ) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}