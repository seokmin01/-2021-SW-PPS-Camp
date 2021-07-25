/*
다이얼의 숫자와 해당 알파벳을 map에 저장한다.
문자열을 입력받고 문자열을 순회한다.
    알파벳이이 map에 있으면 해당 숫자를 count에 더한다.
    숫자 1을 걸려면 총 2초가 소요되므로 더하는 숫자는 해당 숫자 + 1 이다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    m.insert(make_pair("ABC", 2));
    m.insert(make_pair("DEF", 3));
    m.insert(make_pair("GHI", 4));
    m.insert(make_pair("JKL", 5));
    m.insert(make_pair("MNO", 6));
    m.insert(make_pair("PQRS", 7));
    m.insert(make_pair("TUV", 8));
    m.insert(make_pair("WXYZ", 9));
    
    string str;
    cin >> str;
    int count = 0, v;
    for ( int i = 0; i < str.size(); i++ ) {
        for ( auto iter : m ) {
            if ( iter.first.find(str[i]) != string::npos )
                v = iter.second;
        }
        count += v + 1;
    }
    cout << count;
}