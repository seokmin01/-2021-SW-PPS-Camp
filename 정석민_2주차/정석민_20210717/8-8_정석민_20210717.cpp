/*
ios::sync_with_stdio(0)과 cin.tie(0)을 적용해준다.
t을 입력받고 t만큼 반복한다.
    a, b를 입력받고 a + b를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, a, b;
    cin >> t;
    for ( int i = 0; i < t; i++ ) {
        cin >> a >> b;
        cout << a + b << '\n';
    }
}