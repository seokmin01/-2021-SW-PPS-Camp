/*
int, string를 pair로 묶은 값을 저장하는 벡터를 생성한다.
M부터 N까지 숫자와 해당 문자열을 벡터에 저장한다.
문자열을 기준으로 오름차순 정렬이 될 수 있도록 comp 함수를 선언하자.
sort 함수와 comp 함수를 이용하여 벡터를 정렬한다.
한 줄에 10개씩 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, string> a, pair<int, string> b) {
    return a.second < b.second;
}

int main() {
    vector<string> str = {
        "zero", "one", "two", "three",
        "four", "five", "six", "seven",
        "eight", "nine"
    };
    vector<pair<int, string>> v;
    int M, N;
    cin >> M >> N;
    for ( int i = M; i <= N; i++ ) {
        string s = "";
        for ( auto c : to_string(i) ) {
            s += str[c - '0'];
            s += " ";
        }
        v.push_back(pair<int, string>(i, s));
    }
    sort(v.begin(), v.end(), comp);
    for ( int i = 0; i < v.size(); i++ ) {
        cout << v[i].first << " ";
        if ( i % 10 == 9 ) cout << '\n';
    }
}