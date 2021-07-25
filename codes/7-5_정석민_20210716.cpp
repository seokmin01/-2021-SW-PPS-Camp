/*
문자열을 입력받고 문자로 나눠서 새로운 벡터에 저장한다.
벡터를 정렬하고 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comp(char a, char b) {
    return a > b;
}

int main() {
    string s;
    cin >> s;
    vector<char> v;
    for ( auto c : s )
        v.push_back(c);
    sort(v.begin(), v.end(), comp);
    for ( auto c : v )
        cout << c;
}