/*
찾기 속도가 빠른 unordered_set과
자동으로 정렬되어 추가되는 set을 사용하자.
듣도 못한 사람을 unordered_set에 저장하자.
보도 못한 사람을 입력받으면서
    이름이 unordered_set에 있으면
    set에 이름을 추가한다.
set의 크기와 내용을 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<string> s;
    set<string> answer;
    string str;
    int n, m;
    cin >> n >> m;
    for ( int i = 0; i < n; i++ ) {
        cin >> str;
        s.insert(str);
    }
    for ( int i = 0; i < m; i++ ) {
        cin >> str;
        if ( s.find(str) != s.end() ) answer.insert(str);
    }
    cout << answer.size() << '\n';
    for ( auto i : answer )
        cout << i << '\n';
}