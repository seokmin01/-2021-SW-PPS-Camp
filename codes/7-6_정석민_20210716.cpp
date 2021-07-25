/*
x값과 y값을 pair로 묶어서 벡터에 저장한다.
comp 함수를 선언한다.
    x값을 오름차순으로 정렬한다.
    x값이 같을 때는 y값을 오름차순으로 정렬한다.
벡터를 정렬하고 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    if ( a.first != b.first ) return a.first < b.first;
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;
    int x, y;
    vector<pair<int, int>> v;
    for ( int i = 0; i < n ; i++ ) {
        cin >> x >> y;
        v.push_back(pair<int, int>(x, y));
    }
    sort(v.begin(), v.end(), comp);
    for ( int i = 0; i < v.size() ; i++ )
        cout << v[i].first << " " << v[i].second << '\n';
}