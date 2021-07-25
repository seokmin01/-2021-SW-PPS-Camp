/*
중복을 허용하지 않고 정렬하면서 값을 추가할 수 있는 set을 선언하자.
n만큼 단어를 입력받고 set에 추가한다.
set을 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b) {
    if ( a.length() != b.length() )
        return a.length() < b.length();
    return a < b;
}

int main() {
    int n;
    cin >> n;
    set<string, decltype(comp)*> dict(comp);
    string s;
    for ( int i = 0; i < n; i++ ) {
        cin >> s;
        dict.insert(s);
    }
    for ( auto i : dict )
        cout << i << '\n';
}