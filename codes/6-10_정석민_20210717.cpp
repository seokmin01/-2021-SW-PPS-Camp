/*
unordered_set으로 사전을 만들어보자.
2중 반복문과 substr 메서드를 이용해서 만들어지는 부분 문자열을 모두 구한다.
부분 문자열을 사전에 추가한다.
사전의 크기를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<string> dict;
    string s;
    cin >> s;
    int len = s.length();
    for ( int i = 0; i < len; i++ ) {
        for ( int j = 1; j < len - i + 1; j++ )
            dict.insert(s.substr(i, j));
    }
    cout << dict.size();
}