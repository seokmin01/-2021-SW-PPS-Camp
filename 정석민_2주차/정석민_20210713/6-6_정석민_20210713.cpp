/*
입력받은 문자열을 벡터에 저장한다.
sort 함수를 쓰기 전에 compare 함수를 만들자.
    두 문자열의 길이가 다르면, 더 길이가 짧은 문자열이 앞으로 가게 한다.
    두 문자열의 숫자인 자릿수의 합을 비교해서 작은 합을 가지는 문자열이 앞으로 가게 한다.
    숫자 자릿수의 합이 같으면, 문자열 자체를 비교해서 먼저 사전에 나오는 문자열이 앞으로 가게 한다.
compare 함수를 sort 함수의 인수로 넣고 벡터를 정렬한다.
벡터를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    if ( a.length() != b.length() )
        return a.length() < b.length();
    int sum_a = 0, sum_b = 0;
    for ( auto c : a ) {
        if ( c >= '0' && c <= '9' ) sum_a += (c - '0');
    }
    for ( auto c : b ) {
        if ( c >= '0' && c <= '9' ) sum_b += (c - '0');
    }
    if ( sum_a != sum_b )
        return sum_a < sum_b;
    return a < b;
}

int main() {
    vector<string> v;
    string s;
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), compare);
    for ( int i = 0; i < n; i++ )
        cout << v[i] << '\n';
}