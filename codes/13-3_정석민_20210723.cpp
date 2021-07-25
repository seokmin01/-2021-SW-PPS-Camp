/*
과일의 개수와, 처음 길이, 과일 벡터를 입력받는다.
과일 벡터를 오름차순으로 정렬한다.
과일의 개수만큼 반복한다.
    과일이 스네이크버드의 길이보다 작거나 같으면,
    스네이크버드의 길이에 1을 더한다.
    아니라면, break 한다.
스네이크버드의 길이를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l, a;
    vector<int> h;
    cin >> n >> l;
    for ( int i = 0; i < n; i++ ) {
        cin >> a;
        h.push_back(a);
    }
    sort(h.begin(), h.end());
    for ( int i = 0; i < n; i++ ) {
        if ( l >= h[i] ) l++;
        else break;
    }
    cout << l;
}