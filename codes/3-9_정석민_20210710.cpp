/*
반복되는 패턴을 벡터로 저장하자.
n을 14로 나눈 나머지를 idx 변수에 저장한다.
벡터[idx]를 출력한다. 이때 값이 tururu나 turu이면,
n을 14로 나눈 몫 만큼 ru를 더 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> v = {
        "baby", "sukhwan", "tururu", "turu",
        "very", "cute", "tururu", "turu",
        "in", "bed", "tururu", "turu",
        "baby", "sukhwan"
    };
    int idx = (n - 1) % 14;
    string result = v[idx];
    if ( result == "tururu" || result == "turu" ) {
        for ( int i = 0; i < n/14; i++ )
            result += "ru";
        if ( result.length() >= 12 )
            result = "tu+ru*" + to_string((result.length() - 2) / 2);
    }
    cout << result;
}